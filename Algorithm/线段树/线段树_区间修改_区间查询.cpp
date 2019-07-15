// #pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL
const int maxn = 1e6 + 7;

struct SegmentTree{
	int l, r;
	long long sum, add;
	#define l(x) tree[x].l
	#define r(x) tree[x].r
	#define sum(x) tree[x].sum
	#define add(x) tree[x].add
} tree[100010*4];
int a[100010], n, m, cmd, x, y, k;

void build(int p, int l, int r){
	l(p) = l, r(p) = r;
	if (l == r){
		sum(p) = a[l];
		return;
	}
	int mid = (l + r) / 2;
	build(p * 2, l, mid);
	build(p * 2 + 1, mid + 1, r);
	sum(p) = sum(p * 2) + sum(p * 2 + 1);
}

void spread(int p){
	if (add(p)){
		sum(p * 2) += add(p) *(r(p * 2) - l(p * 2) + 1);
		sum(p * 2 + 1) += add(p) * (r(p * 2 + 1) - l(p * 2 + 1) + 1);
		add(p *2) += add(p);
		add(p * 2 + 1) += add(p);
		add(p) = 0;
	}
}

void change(int p, int l, int r, int d){
	if (l <= l(p) && r >= r(p)){
		sum(p) += (long long)d * (r(p) - l(p) + 1);
		add(p) += d;
		return;
	}
	spread(p);
	int mid = (l(p) + r(p)) / 2;
	if (l <= mid) change(p * 2, l, r, d);
	if (r > mid) change(p * 2 + 1, l, r, d);
	sum(p) = sum(p * 2) + sum(p * 2 + 1);
}
long long ask(int p, int l, int r){
	if (l <= l(p) && r >= r(p)) return sum(p);
	spread(p);
	int mid = (l(p) + r(p)) / 2;
	long long val = 0;
	if (l <= mid) val += ask(p * 2, l, r);
	if (r > mid) val += ask(p * 2 + 1, l, r);
	return val;
}

int main(){
	while(scanf("%d%d", &n, &m) != EOF){
		for (int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		build(1, 1, n);
		while(m--){
			scanf("%d", &cmd);
			if (cmd == 1){
				scanf("%d%d%d", &x, &y, &k);
				change(1, x, y, k);
			}
			else{
				scanf("%d%d", &x, &y);
				printf("%lld\n", ask(1, x, y));
			}
		}
	}
}
