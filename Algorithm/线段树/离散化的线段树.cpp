/*
此模板可以单点修改A[x]的值，以及查询A[l, r]的最大值
如果要在此基础上修改，请复制副本，不要对原来调试好的代码进行改动

A[x]是一个数组，我们假设这个数组下标的最大值可以取到1e9，初始时每个元素为0，同时保证修改和查询最多1e5个。

这样子，我们就不能真的开一个1e9的数组来存取了，因为其他点初始化为0，所以我们区间查询的时候只需要查询那些被修改过的点即可。
所以我们可以把所有被修改过的点和查询过的区间的左端点和右端点都存下来，因为总共最多也就2e5个嘛。把原来取值从1到1e9的数字去重，然后按照大小顺序放到一个数组里面。
然后我们可以用lower_bound把这些数值的下标给找出来，这样子，如果给x赋值，那就相当于给x对应下标的标号赋值。
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 1e5 + 7;
const int maxn = 1e5 + 7;
struct SegmentTree{
	int l, r;
	int dat;
} t[SIZE * 4];
int a[SIZE], b[maxn], cnt_b = 0; // 区间上数的值
int n;

// 线段树的构建函数
// 调用入口:build（1, 1, n);
// 每个节点上保存了对应区间的最大值

struct Cmd // 用于存储命令
{
	// cmd=1代表修改，把下标为x的数变为y
	// cmd=2代表查询，查询区间[x, y]的和
	int cmd, x, y;
};
void build(int p, int l, int r){
	t[p].l = l, t[p].r = r;
	if (l == r){ // 叶子节点
		t[p].dat = a[l]; return;
	}

	int mid = (l + r) / 2;
	build(p * 2, l, mid); // 左子节点[l, mid]，编号为p * 2
	build(p * 2 + 1, mid + 1, r); // 右子节点[mid + 1, r]，编号为p * 2 + 1
	t[p].dat = t[p * 2].dat + t[p * 2 + 1].dat;
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
	t[p].dat = t[p * 2].dat + t[p * 2 + 1].dat;
}

// 区间查询
// ask(1, l, r); 查询l到r的最大值
int ask(int p, int l, int r){
	if (l == t[p].l && r == t[p].r){
		return t[p].dat;
	}
	else if (t[p].l == l && t[p].r < r){
		return t[p].dat;
	}
	else if (t[p].l > l && t[p].r == r){
		return t[p].dat;
	}
	int mid = (t[p].l + t[p].r) / 2;
	int val = 0; // 负无穷大
	if (l <= mid) val +=  ask(p * 2, l, r);
	if (r > mid) val += ask(p * 2 + 1, l, r);
	return val;
}
void print(){
	cout << "value of every node" << endl;
	for (int i = 1; i <= 4 * n; i++){
		printf("%dth: l = %d, r = %d, dat = %d\n", i, t[i].l, t[i].r, t[i].dat);
	}
}
int id(int x){
	int ans = lower_bound(b, b + cnt_b, x) - b;
//	if (ans >= cnt_b){
//		ans = cnt_b - 1;
//	}
	return ans;
}
int main(int argc, char * argv[]) {
	int X, Y, x, v, l, r;
	Cmd c[maxn];
	cnt_b = 0;
	cin >> X; // 输入n个元素，以及X次操作
	for (int i = 1; i <= X; i++){
		scanf("%d%d%d", &c[i].cmd, &c[i].x, &c[i].y);
		if (c[i].cmd == 1){
			b[cnt_b++] = c[i].x;
		}
		else{
			b[cnt_b++] = c[i].x;
			b[cnt_b++] = c[i].y;
		}
	}

	// 去重以及离散化
	sort(b, b + cnt_b);
	cnt_b = unique(b, b + cnt_b) - b;
	
	build(1, 1, (cnt_b + 1) * 3);
	cout << "cnt_b:" << cnt_b << endl;
	for (int i = 0; i < cnt_b; i++){
		cout << b[i] << " ";
		if (i == cnt_b - 1) cout << endl;
	}
	for (int i = 1; i <= X; i++){
		if (c[i].cmd == 1){
			change(1, id(c[i].x), c[i].y);
		}
		else if (c[i].cmd == 2){
			cout << "in ask" << id(c[i].x) << " " << id(c[i].y) << endl;
			cout << ask(1, id(c[i].x), id(c[i].y)) << endl;
		}
	}
//	print();
    return 0;
}