#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
// 一个节点结构体
class node{
public:
	node(){}
	node(char _c, int _weight, node *_left, node *_right){ 
	//有参构造，字符，对应权重，左二子又儿子
		c = _c;
		weight = _weight;
		left = _left;
		right = _right;
	}
	char c;
	int weight;
	node *left = NULL;
	node *right = NULL;
};
//这是一个很重要的函数，为了使用结构体类型的priority_queque，所以要重载小于号
bool operator<(node a, node b){
	return a.weight > b.weight; //因为默认的优先队列是最大的放在顶端，而我们需要小的放在顶端，所以写成“>”

}
//前序遍历 根 左 右
void preOder(node *root){
	if (root != NULL){
		cout << root->c << " " << root->weight << endl;
		preOder(root->left);
		preOder(root->right);
	}
}
void huffmanCode(node *root, string s){
	if (root->left != NULL){
		huffmanCode(root->left, s + "0");
	}
	if (root->right != NULL){
		huffmanCode(root->right, s + "1");
	}
	if (root->right == NULL && root->left == NULL){
		cout << root->c << ":" << s << endl;
	}
}
int main(){
	//freopen("in.txt", "r", stdin);
	//先把每个节点放在数组里
	int size;
	node t[1000], root;
	priority_queue<struct node> q;
	cin >> size; //节点个数
	for (int i = 0; i < size; i++){
		//输入好了推进去优先队列就好
		cin >> t[i].c >> t[i].weight;
		q.push(t[i]);
	}
	/*
	//输出试试优先队列对不对
	while (!q.empty()){
		a = q.top();
		q.pop();
		cout << a.c << " " << a.weight << endl;
	}
	*/
	//开始构造哈夫曼了,在这里t数组需要重写
	//之前已经把t数组里的所有东西都推进优先队列了，这里再弄出来
	int i = 0;
	while (!q.empty()){
		t[i++] = q.top(); //取一个最小的
		q.pop(); //删除最小的
		if (q.empty()){
			//如果为空，则队列里只有一个节点，则上一个已经是根了
			root = t[i - 1];
			break;
		}
		t[i++] = q.top();//继续取出来最小的
		q.pop();//删除最小的
		//这行有点缩略，就是新建一个节点，左右儿子是前面两个节点，权值是前面两个最小的之和
		//然后放到优先队列里去
		q.push(node('*', t[i - 1].weight + t[i - 2].weight, &t[i - 1], &t[i - 2]));
	}
	// 前序遍历
	// preOder(&root);
	huffmanCode(&root, "");
}