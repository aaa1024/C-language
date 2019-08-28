/*
此模板可以单点修改A[x]的值，以及查询A[l, r]的最大值
如果要在此基础上修改，请复制副本，不要对原来调试好的代码进行改动
andywu1998
2019.7.11

update
某次比赛不小心改了，现在是求区间最小值，并且把数组当做参数传到函数里了，这样子的话我们就可以建多个线段树
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 1e3 + 7;

struct SegmentTree{
	int l, r;
	int dat;
} t1[SIZE * 4], t2[SIZE * 4];
int a1[SIZE], a2[SIZE]; // 区间上数的值
int n;
// 线段树的构建函数
// 调用入口:build（1, 1, n);
// 每个节点上保存了对应区间的最大值
void build(int p, int l, int r, SegmentTree *t, int *a){ // 线段树用的数组t和a
	t[p].l = l, t[p].r = r;
	if (l == r){ // 叶子节点
		t[p].dat = a[l]; return;
	}

	int mid = (l + r) / 2;
	build(p * 2, l, mid, t, a); // 左子节点[l, mid]，编号为p * 2
	build(p * 2 + 1, mid + 1, r, t, a); // 右子节点[mid + 1, r]，编号为p * 2 + 1
	t[p].dat = min(t[p * 2].dat, t[p * 2 + 1].dat);
}

// 单点修改
// 调用change(1, x, v) 。把A[x] 改成v
void change(int p, int x, int v, SegmentTree *t, int *a){
	if (t[p].l == t[p].r){ // 找到叶子节点
		t[p].dat = v;
		return;
	}
	int mid = (t[p].l + t[p].r) / 2;
	if (x <= mid) change(p * 2, x, v, t, a); // x属于左半区间
	else change(p * 2 + 1, x, v, t, a); // x属于右半区间
	t[p].dat = min(t[p * 2].dat, t[p * 2 + 1].dat);
}

// 区间查询
// ask(1, l, r); 查询l到r的最大值
int ask(int p, int l, int r, SegmentTree *t, int *a){
	if (l <= t[p].l && r >= t[p].r){ // 完全包含
		return t[p].dat; 
	}
	int mid = (t[p].l + t[p].r) / 2;
	int val = (1 << 30); // 负无穷大
	if (l <= mid) val = min(val, ask(p * 2, l, r, t, a));
	if (r > mid) val = min(val, ask(p * 2 + 1, l, r, t, a));
	return val;
}
int main(int argc, char * argv[]) {
	int X, Y, x, v, l, r;
	cin >> n >> Y; // 输入n个元素，以及X次修改，Y次查询
	for (int i = 1; i <= n; i++){
		cin >> a1[i];
	}
	build(1, 1, n, t1, a1);
	for (int i = 1; i <= Y; i++){
		cin >> l >> r;
		cout << ask(1, l, r, t1, a1) << endl;
	}
	for (int i = 1; i <= n; i++){
		cin >> a2[i];
	}
	build(1, 1, n, t2, a2);
	for (int i = 1; i <= Y; i++){
		cin >> l >> r;
		cout << ask(1, l, r, t2, a2) << endl;
	}
		
    return 0;
}