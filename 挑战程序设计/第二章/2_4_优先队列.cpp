#include <iostream>
#define maxn 10000
using namespace std;
class Priority_queue
{
public:
	Priority_queue(){}
	~Priority_queue(){}
	void push(int x){
		int i = sz++;
		while (i > 0){
			int p = (i - 1) / 2; //父节点的编号
			if (heap[p] <= x) break;
			heap[i] = heap[p];
			i = p;
		}
		heap[i] = x;
	}

	int pop(){
		int ret = heap[0]; //最小值
		int x = heap[--sz]; //要提到根部的值
		//从根开始向下交换
		int i = 0;
		while (i * 2 + 1 < sz){
			//比较儿子的值
			int a = i * 2 + 1, b = i * 2 + 2;
			if (b < sz && heap[b] < heap[a]) a = b;
			//如果已经没有大小颠倒则退出
			if (heap[a] >= x) break;
			//把儿子的值提上来
			heap[i] = heap[a];
			i = a;
		}
		heap[i] = x;
		return ret;
	}
private:
	int heap[maxn];
	int sz = 0;
};
int main(){
	Priority_queue p;
	p.push(3);
	p.push(5);
	p.push(6);
	p.push(4);
	cout << p.pop() << endl;
	return 0;
}