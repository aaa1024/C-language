#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
链表的设计
1. 一个结构体代表节点
2. 一个结构体代表链表
链表里的元素
1. 头节点
2. 各种函数
链表的功能
1. 新建链表
2. 打印链表
3. 插入节点
4. 删除节点
5. 查找结点
6. 倒置链表

update:
增加了模板
*/
template <class T>
class linkedList{
private:
	struct node{
		T data;
		node * next;
	};
	int len;
	node * head;
	node *prev;

	//一个菜单
public:

	/*
	初始化链表
	输入链表长度，然后输入各个元素的值
	先初始化头指针，然后再令当前指针pre等于头指针
	逐个遍历指针，prev = prev->next，最后一个结点的next为nullptr
	*/
	//template <class type>
	void init(int _len){
	//	cout << "input the len of linkedList:" << endl;
	//	cin >> len;
		len = _len;
		head = new node;
		prev = head;
//		cout << "please input the data of every node:" << endl;
		for (int i = 1; i <= len; i++){
			prev->data = i;
			if (i != len){
				prev->next = new node;
				prev = prev->next;
			}
			else{
				prev->data = i;
				prev->next = head;
			}
		}
	//	cout << "A new linkedList is inited!" << endl;
	}
	/*
	打印链表
	从头指针开始遍历，当前指针prev等于头指针head,然后每次输出当前指针的data值
	接着prev = prev->next
	直到prev->next为空指针时终止
	*/
	void go1(T k){
		int cnt = 1;
		prev = head;
		while (cnt < k){
			prev = prev->next;
			cnt++;
		}
		cout << prev->data << endl;
	}
	void go2(T k){
		int cnt = 0;
		node *t, *temp;
		while (cnt < k){
			t = prev;
			prev = prev->next;
			cnt++;
		}
		cout << prev->data << endl;
		t->next = t->next->next;
		temp = prev;
		prev = t;
		delete temp;
		len--;
	}
	void solve(int k, int m){
		go1(k);
		while (len >= 1){
			go2(m);
		}
	}
	void print(){
		prev = head;
		int cnt = 0;
		if (head == nullptr){
			cout << "the linkedList do not exist!" << endl;
			return;
		}
		while (cnt < 3 * len){
			cnt++;
			cout << prev->data << " ";
			prev = prev->next;
		}
		cout << endl;
	}
	void delelteNode(T x){
		prev = find(x);
		if (prev == nullptr){
			cout << "The linkedList do not exist " << x << " " << endl;
			return;
		}
		if (prev == (node*)-1){
			prev = head;
			head = head->next;
			delete prev;
		}
		else{
			node* t = prev->next;
			prev->next = t->next;
			delete t;
		}
	}
};
int main(){
	int n, k, m;
	while (cin >> n >> k >> m){
		linkedList <int> a;
		a.init(n);
		a.solve(k, m);
	}
	return 0;
}