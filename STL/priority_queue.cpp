#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
/*
	构造一个结构体。把结构体放进优先队列里。
	需要重载一下'<'，即定义两个结构体元素如何比大小
	使得优先队列每次都能弹出最大的元素。
	STL里默认每次弹出的是最大元素，如果需要改变成最小堆，则重载小于号的时候内部写大于号

*/
struct node{
	int a;
	int b;
	bool operator < (const node &x) const{
		//若a小则这个结构体小，若a相等则比b
		if (a != x.a) return a > x.a;
		else return b > x.b;
	}
	node (int _a, int _b){
		a = _a;
		b = _b;
	}
};

//在这个函数里做结构体优先队列的实验
void struct_queque(){
	priority_queue<node> q;
	int n, a, b;
	for (int i = 0; i < 5; i++){
		q.push(node(i, - i * i)); //插入的每个node中a为i，b为- i * i
	}
	while (!q.empty()){
		cout << q.top().a << " " << q.top().b << endl;
		q.pop();
	}
}

/*
	在这个函数里做less和greater的实验/。
	同一种结构体如果要它构成一个最大堆和一个最小堆，则原来的重载小于号的办法则不行。
	用这种办法可以解决。
*/
void less_and_greater(){
	priority_queue <int, vector<int>, less<int> > p; // 两个>不要写连一起
	priority_queue <int, vector<int>, greater<int> > q;

	for (int i = 1; i <= 5; i++){
		p.push(i);
		q.push(i);
	}
	cout << "less<int>" << endl;
	while (!p.empty()){
		cout << p.top() << endl;
		p.pop();
	}
	while (!q.empty()){
		cout << q.top() << endl;
		q.pop();
	}
}
int main(){
	struct_queque();
	less_and_greater();
	// 一定要注意在优先队列里取队首元素的函数为top，但在队列中是front
}