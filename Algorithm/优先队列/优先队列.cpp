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
	    //�Լ��ı��
        int i = sz++;
        while (i > 0){
            //���׽ڵ�ı��
            int p = (i - 1) / 2;
            if (a[p] <= x) break;//������׽ڵ��Ѿ�С���Լ��ˣ��ǾͿ����˳���
            a[i] = a[p];
            i = p;
        }
        a[i] = x;
	}
	int pop(){
	    //��Сֵ
        int t = a[0];
        //Ҫ�ᵽ���ϵ�ֵ
        int x = a[--sz];
        //�Ӹ���ʼ���½���
        int i = 0;
        while (i * 2 + 1 < sz){
            //�Ƚ϶��ӵ�ֵ
            int l = i * 2 + 1;
            int r = i * 2 + 2;
            //��l�����С���ӵı��
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
