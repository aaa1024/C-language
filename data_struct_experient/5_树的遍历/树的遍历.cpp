#include <cstdio>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stack>
using namespace std;
class Node{
public:
	int key; // 关键码值
	int val;	//关键码值所对应的值
	Node *left; //切记要赋空
	Node *right;
	int N; //以该节点为根个的子树中的节点个数
	Node(int _key, int _val, int _N){
		left = NULL;
		right = NULL;
		this->key = _key;
		this->val = _val;
		this->N = _N;
	}
	Node(){
		left = NULL;
		right = NULL;
	}
};
// 为了非递归后序遍历而建立的结构体
// tag为0代表左，为1代表右
// ptr是指向节点的指针
struct StackNode{
//	enum Tag {LL, RR};
	int tag; // 0 mean left, 1 mean right
	Node * ptr;
	StackNode(){
		ptr = NULL;
	}
};
class BST{
private:
	// 根节点
	Node *root;
	// 返回以x为根的树的元素个数
	int size(Node *x){
		if (x == NULL) return 0;
		else return x->N;
	}
	//在以x为根节点的树中找关键码为key的值，返回key所对应的value
	int get(Node *x, int key){
		if (x == NULL) return 0;
		int cmp = key - x->key;
		if (cmp < 0) return get(x->left, key);//小于0说明key比插入值小，所以到左边查找
		else if (cmp > 0) return get(x->right, key);
		else return x->val;
	}

	// 添加一对key和value
	Node *put(Node *x, int key, int val){
		//如果key存在于以x为根节点的子树中则更新它的值
		//否则将以key和val为键值对的新节点插入到该子树中
		if (x == NULL) return new Node(key, val, 1);
		int cmp = key - x->key;
		if (cmp < 0) x->left = put(x->left, key, val); //小于0说明key比插入值小，所以放到左边
		else if (cmp > 0) x->right = put(x->right, key, val); //反之亦然
		else x->val = val; //如果相等说明键一样，则更新值
		x->N = size(x->left) + size(x->right) + 1; //更新一下子节点个数
		return x;
	}
	// 返回最小值，一直往左走就是最小值
	Node *min(Node *x){
		if (x->left == NULL) return x;
		return min(x->left);
	}
	// 一直往右走就是最大值
	Node *max(Node *x){
		if (x->right == NULL) return x;
		return max(x->right);
	}
	// 某个值的上界
	Node * floor(Node *x, int key){
		if (x == NULL) return NULL;
		int cmp = key - x->key;
		if (cmp == 0) return x;
		if (cmp < 0) return floor(x->left, key);
		Node *t = floor(x->right, key);
		if (t != NULL) return t;
		else return x;
	}
	// 前序递归遍历
	void pre_order(Node * x){
		// 为0就返回
		if (x == NULL){
			return;
		}
		else{
			// 先访问根，然后左子树，最后右子树。
			cout << x->key << endl;
			pre_order(x->left);
			pre_order(x->right);
		}
	}

	// 非递归前序遍历
	void pre_order_not_recursion(Node *x){
		// 如果为0则返回
		if (x == NULL){
			return;
		}
		else{
			// 建立一个辅助栈
			stack <Node*> s;
			s.push(x); // 先放根节点
			while (!s.empty()){
				// 取出栈顶元素
				Node *t = s.top();
				cout << t->key << endl;
				s.pop();
				// 先放右子树，再放左子树
				if (t->right != NULL){
					s.push(t->right);
				}
				if (t->left != NULL){
					s.push(t->left);
				}
			}
		}
	}

	// 递归中序遍历
	void mid_order(Node * x){
		// 如果是NULL则返回
		if (x == NULL){
			return;
		}
		else{
			// 按照左根右的顺序访问即可
			mid_order(x->left);
			cout << x->key << endl;
			mid_order(x->right);
		}
	}
	// 非递归中序遍历
	void mid_order_not_recursion(Node *x){
		// 如果为NULL 则返回
		if (x == NULL){
			return;
		}
		else{
			//需要辅助栈，还有一个临时节点
			Node * node = x; // 从根节点开始
			stack <Node*> s;
			while(node || !s.empty()){
				//先从当前节点出发，把左子树放进栈中。然后放左子树的左子树，以此类推
				while(node != NULL){
					s.push(node);
					node = node -> left;
				}
				//弹出的元素一定是最左端的元素，然后进行访问，弹出。
				node = s.top();
				cout << node->key << endl;
				s.pop();
				// 接着把当前节点变成当前节点的右子树
				node = node->right;
			}
		}
	}
	// 递归后序遍历
	void post_order(Node *x){
	    if (x)
	    {
	    	// 按照左右根的顺序访问即可
	        post_order(x->left);
	        post_order(x->right);
	        cout << x->key << endl;
	    }
	}
	// 非递归后序遍历
	void post_order_not_recursion(Node *x){
		stack<StackNode> s; // 开一个存放StackNode的辅助栈
		// 创建节点，并且从根开始
		Node *p;
		StackNode w;
		p = x;
		do {
			// 先从当前节点开始，把它的左子树都推入栈
			// 并且打上左标签
			while (p != NULL){
				w.ptr = p;
				w.tag = 0;
				s.push(w);
				p = p->left;
			}
			// 是否继续的一个标记变量
			int Continue = 1;
			while (Continue && !s.empty()){
				// 取栈顶元素
				w = s.top(); s.pop();
				p = w.ptr;
				switch(w.tag){
					// 如果为左节点，则把标签改成右节点，再次推入栈
					// 然后把当前节点设置成栈顶节点的右子树
					// 如果右子树不为空的话，外圈大循环再次开始使，将以右子树为当前节点继续操作
					// 因为当前节点使它左子树的根，所以只有当它的右子树为空或者被处理完之后，才会从栈中推出被处理。
					case 0:
						w.tag = 1;
						s.push(w);
						Continue = 0;
						p = p->right;
						break;
					case 1:
						// 如果当前节点为右，则访问堆顶元素，并且不改变Continue的值
						// 使循环继续
						printf("%d\n", p->key);
						// 这里是很重要的一个地方
						// 后序遍历最后一个访问的就是整棵树的根
						// 所以当访问到整棵树的根时，务必退出
						// 要不然又会以根节点为当前节点继续操作，造成会死循环。
						if (p == x){
						    p = NULL;
						}
						break;
				}
			}
		} while (p != NULL|| !s.empty());
	}
public:
	int size(){
		return size(root);
	}
	int get(int key){
		return get(root, key);
	}
	void put(int key, int val){
		root = put(root, key, val);
	}
	int min(){
		return min(root)->key;
	}
	int max(){
		return max(root)->key;
	}
	void pre_order(){
		pre_order(root);
	}
	void pre_order_not_recursion(){
		pre_order_not_recursion(root);
	}
	void mid_order(){
		mid_order(root);
	}
	void mid_order_not_recursion(){
		mid_order_not_recursion(root);
	}
	void post_order(){
		post_order(root);
	}
	void post_order_not_recursion(){
		post_order_not_recursion(root);
	}
	BST(){
		root = NULL;
	}
};
int main(){
	BST bst;
	srand(time(NULL));
	int n, a;
	cout << "please input n and n numbers" << endl;
	cin >> n;
//	int xl[] = {5, 3, 8, 2, 4, 6, 9};
	for(int i = 0; i < n; i++){
		//cout << bst.get(i) << endl;
		cin >> a;
		bst.put(a, a);
		//cout << bst.get(i) << endl;
		//cout << bst.get(i - 1) << endl;
	}
	cout << endl;
	//前序
	printf("pre_order:\n");
	bst.pre_order();
	printf("pre_order_not_recursion\n");
	bst.pre_order_not_recursion();
	cout << endl;

	//中序
	printf("mid_order\n");
	bst.mid_order();
	cout << endl;
	printf("mid_order_not_recursion\n");
	bst.mid_order_not_recursion();

	//后序
	printf("post_order\n");
	bst.post_order();
	printf("post_order_not_recursion\n");
	bst.post_order_not_recursion();
	//查的是最大键和最小键，而不是最大最小值
	printf("min:%d\n", bst.min());
	printf("max:%d\n", bst.max());
	return 0;
}
