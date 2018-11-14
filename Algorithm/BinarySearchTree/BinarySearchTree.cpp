#include <cstdio>
#include <iostream>
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
};
int main(){
	BST bst;
	int a[100] = {0, 1, 1};
	bst.put(1, 1);
	bst.put(2, 1);
	
	for(int i = 3; i <= 10; i++){
		//cout << bst.get(i) << endl;
		a[i] = a[i - 1] + a[i - 2];
		bst.put(i, a[i]);
		//cout << bst.get(i) << endl;
		//cout << bst.get(i - 1) << endl;
	}
	for(int i = 1; i <= 10; i++){
		cout << bst.get(i) << endl;
	}
	//查的是最大键和最小键，而不是最大最小值
	printf("min:%d\n", bst.min());
	printf("max:%d\n", bst.max());
	return 0;
}
