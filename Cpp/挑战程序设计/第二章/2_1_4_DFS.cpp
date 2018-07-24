//输入n个数，判断是否能从n个数中选出若干个数使得他们的和等于k
#include <iostream>
#include <cstdio>
#define maxn 1000
using namespace std;

int a[maxn];
int n, k;
bool dfs(int i, int sum){
	if (i == n) return sum == k;	//如果已经加了n个数，则直接判断是否能相加
	if (dfs(i + 1, sum)) return true; //不加上i的情况
	if (dfs(i + 1, sum + a[i])) return true;
	return false;
}

void solve(){
	if (dfs(0, 0)) printf("Yes\n");
	else printf("No\n");
}
int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	solve();
}
