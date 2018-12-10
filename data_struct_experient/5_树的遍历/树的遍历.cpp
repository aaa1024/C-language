#include <cstdio>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stack>
using namespace std;

class Node{
public:
	int key;
	int val;
	Node *left = NULL; //切记要赋空
	Node *right = NULL;
	int N; //以该节点为根个的子树中的节点个数
	Node(int _key, int _val, int _N){
		this->key = _key;
		this->val = _val;
		this->N = _N;
	}
};

class BST{
private:
	Node *root = NULL;
	int size(Node *x){
		if (x == NULL) return 0;
		else return x->N;
	}
	int get(Node *x, int key){
		if (x == NULL) return 0;
		int cmp = key - x->key;
		if (cmp < 0) return get(x->left, key);//小于0说明key比插入值小，所以到左边查找
		else if (cmp > 0) return get(x->right, key);
		else return x->val;
	}
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
	Node *min(Node *x){
		if (x->left == NULL) return x;
		return min(x->left);
	}
	Node *max(Node *x){
		if (x->right == NULL) return x;
		return max(x->right);
	}
	Node * floor(Node *x, int key){
		if (x == NULL) return NULL;
		int cmp = key - x->key;
		if (cmp == 0) return x;
		if (cmp < 0) return floor(x->left, key);
		Node *t = floor(x->right, key);
		if (t != NULL) return t;
		else return x;
	}
	void pre_order(Node * x){
		if (x == NULL){
			return;
		}
		else{
			cout << x->key << endl;
			pre_order(x->left);
			pre_order(x->right);
		}
	}
	void pre_order_not_recursion(Node *x){
		if (x == NULL){
			return;
		}
		else{
			stack <Node*> s;
			s.push(x);
			while (!s.empty()){
				Node *t = s.top();
				cout << t->key << endl;
				s.pop();
				if (t->right != NULL){
					s.push(t->right);
				}
				if (t->left != NULL){
					s.push(t->left);
				}
			}
		}
	}
	void mid_order(Node * x){
		if (x == NULL){
			return;
		}
		else{
			mid_order(x->left);
			cout << x->key << endl;
			mid_order(x->right);
		}
	}
	void mid_order_not_recursion(Node *x){
		if (x == NULL){
			return;
		}
		else{
			Node * node = x;
			stack <Node*> s;
			while(node || !s.empty()){
				while(node != NULL){
					s.push(node);
					node = node -> left;
				}
				node = s.top();
				cout << node->key << endl;
				s.pop();
				node = node->right;
			}
		}
	}
	void post_order(Node *x)
	{
	    if (x)
	    {
	        post_order(x->left);
	        post_order(x->right);
	        cout << x->key << endl;
	    }
	}
	void post_order_not_recursion(Node *x){
	    Node *t = x;
	    stack<Node *> s1;
	    stack<Node *> s2;   
	    while(t || s1.empty()){
	        while(t)        //一直向右并将沿途节点访问（压入S2）后压入堆栈S1 
	        {
	            s2.push(t);
	            s1.push(t);
	            t = t->right;
	        }
	        if (!s1.empty())
	        {
	            t = s1.top();    //节点弹出堆栈
	            s1.pop();
	            t = t->left;  //转向左子树
	        }
	    }
	    while(!s2.empty())    //访问（打印）S2中元素
	    {
	        t = s2.top();
	        s2.pop();
	        printf("%d\n", t->key);
	    }          
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
	int floor(int key){
		Node *x = floor(root, key);
		if (x == NULL) return 0;
		return x->key;
	}
	void erase(int key){
		//首先需要找到要删除的元素的地址
		//然后找到他左儿子的最右节点x
		//拿它的左儿子x最右节点代替它
		//它的左儿子最右节点x如果有左子树y的话
		//则将x的左子树y接到x的父亲上去
		//11.13，下午来实现代码
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
};
int main(){
	BST bst;
	srand(time(NULL));
	int xl[] = {5, 3, 8, 2, 4, 6, 9};
	for(int i = 0; i < 7; i++){
		//cout << bst.get(i) << endl;
		bst.put(xl[i], xl[i]);
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
