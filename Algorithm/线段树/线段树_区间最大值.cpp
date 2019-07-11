/*
此模板可以单点修改A[x]的值，以及查询A[l, r]的最大值
如果要在此基础上修改，请复制副本，不要对原来调试好的代码进行改动
andywu1998
2019.7.11
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 1e3 + 7;

struct SegmentTree{
	int l, r;
	int dat;
} t[SIZE * 4];
int a[SIZE]; // 区间上数的值
int n;
// 线段树的构建函数
// 调用入口:build（1, 1, n);
// 每个节点上保存了对应区间的最大值
void build(int p, int l, int r){
	t[p].l = l, t[p].r = r;
	if (l == r){ // 叶子节点
		t[p].dat = a[l]; return;
	}

	int mid = (l + r) / 2;
	build(p * 2, l, mid); // 左子节点[l, mid]，编号为p * 2
	build(p * 2 + 1, mid + 1, r); // 右子节点[mid + 1, r]，编号为p * 2 + 1
	t[p].dat = max(t[p * 2].dat, t[p * 2 + 1].dat);
}

// 单点修改
// 调用change(1, x, v) 。把A[x] 改成v
void change(int p, int x, int v){
	if (t[p].l == t[p].r){ // 找到叶子节点
		t[p].dat = v;
		return;
	}
	int mid = (t[p].l + t[p].r) / 2;
	if (x <= mid) change(p * 2, x, v); // x属于左半区间
	else change(p * 2 + 1, x, v); // x属于右半区间
	t[p].dat = max(t[p * 2].dat, t[p * 2 + 1].dat);
}

// 区间查询
// ask(1, l, r); 查询l到r的最大值
int ask(int p, int l, int r){
	if (l <= t[p].l && r >= t[p].r){ // 完全包含
		return t[p].dat; 
	}
	int mid = (t[p].l + t[p].r) / 2;
	int val = -(1 << 30); // 负无穷大
	if (l <= mid) val = max(val, ask(p * 2, l, r));
	if (r > mid) val = max(val, ask(p * 2 + 1, l, r));
	return val;
}
int main(int argc, char * argv[]) {
	int X, Y, x, v, l, r;
	cin >> n >> X >> Y; // 输入n个元素，以及X次修改，Y次查询
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	build(1, 1, n);
	for (int i = 1; i <= X; i++){
		cin >> x >> v;
		change(1, x, v);
	}
	for (int i = 1; i <= Y; i++){
		cin >> l >> r;
		cout << ask(1, l, r) << endl;
	}
    return 0;
}