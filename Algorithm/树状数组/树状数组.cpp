/*
这份代码只支持单点修改和前缀和查询
树状数组的后序扩展，我之后会写

andywu1998
2019.7.12
*/

#include <iostream>
#include <cstdio>
using namespace std;
#define maxn 1000
int N;
int c[maxn];
int ask(int x){ // 询问1 + 2 + ...+ x；
	int ans = 0;
	for (; x; x -= x & -x){
		printf("in ask:%d\n", x);
		ans += c[x];
	}
	return ans;
}
void add(int x, int y){
	// 让数组的第x位加y
	printf("in add, start at %d\n", x);
	for (; x <= N; x += x & -x){
		printf("in add:%d\n", x);
		c[x] += y;
	} 
}
int main(){
	cin >> N;
	int x;
	for (int i = 1; i <= N; i++){
	//	cin >> x;
		x = 1;
		add(i, x);
	}
	for (int i = 1; i <= N; i++){
		cout << ask(i) << endl;
	}
}