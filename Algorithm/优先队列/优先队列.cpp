#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>
#define maxn 1000
using namespace std;

class priority_queque{
private:
	int a[maxn];
	int sz = 0;
	int id;
	int pre;
public:
	void push(int x){
	    //自己的编号
        int i = sz++;
        while (i > 0){
            //父亲节点的编号
            int p = (i - 1) / 2;
            if (a[p] <= x) break;//如果父亲节点已经小于自己了，那就可以退出了
            a[i] = a[p];
            i = p;
        }
        a[i] = x;
	}
	int pop(){
	    //最小值
        int t = a[0];
        //要提到根上的值
        int x = a[--sz];
        //从根开始向下交换
        int i = 0;
        while (i * 2 + 1 < sz){
            //比较儿子的值
            int l = i * 2 + 1;
            int r = i * 2 + 2;
            //令l变成最小儿子的编号
            if (r < sz && a[r] < a[l]) l = r;
            if (a[l] >= x) break;
            a[i] = a[l];
            i = l;
        }
        a[i] = x;
        return t;
	}
	void print(){
		for (int i = 0; i < sz; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
};
int main(){
    srand((unsigned)time(NULL));
	priority_queque a;
    for (int i = 5; i >= 1; i--){
        int x = rand()% 100;
        printf("%d\n", x);
        a.push(x);
    }
	a.print();
	for (int i = 0; i < 5; i++){
        printf("%d, ", a.pop());
	}
}
