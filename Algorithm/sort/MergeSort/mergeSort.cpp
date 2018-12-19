#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#define length 7
using namespace std;
/*
为了描述算法简便，先用全局变量
核心算法就是如何归并,这个在归并的函数里叙述
需要注意的是merge_sort的执行条件是p < r
当p >= r的时候，不需要再进下一层操作
*/

int a[100];
void merge(int p, int r, int q){
	int n1 = r - p + 1; //[p, r]放在数组L
	int n2 = q - r; //[r + 1, q]放一个数组R
	int L[n1 + 1], R[n2 + 1]; //预留一个放正无穷
	//把[p, r]挪到L数组里
	for (int i = p; i < n1 + p; i++){
		L[i - p] = a[i];
	}
	L[n1] = 1000000; //最后一位放正无穷

	//把[r + 1, q]放到R数组里
	for (int i = r + 1; i < n2 + r + 1; i++){
		R[i - (r + 1)] = a[i];
	}
	R[n2] = 1000000;//最后一位放正无穷
	//归并
	int a1 = 0, a2 = 0; //a1和a2是L和R的游标
	for (int i = p; i <= q; i++){
		if (L[a1] < R[a2]){
			a[i] = L[a1];
			a1++;
		}
		else{
			a[i] = R[a2];
			a2++;
		}
	}
}
void merge_sort(int p, int q){
	if (p < q){
		int r = (p + q) / 2; // 中间值
		merge_sort(p, r);//先排[p, r]
		merge_sort(r + 1, q); //再排[r = 1, q]
		merge(p, r, q); //最后合并
	}
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	srand(time(NULL));
	int b[10000];
	for (int i = 0; i < length; i++){
		a[i] = rand() % 100;
		b[i] = a[i];
	}
	for (int i = 0; i < length; i++){
		cout << a[i] << " ";
		if (i == length - 1) cout << endl;
	}
	merge_sort(0, length - 1);
	sort(b, b + length);
	for (int i = 0; i < length; i++){
		cout << a[i] << " ";
		if (i == length - 1) cout << endl;
	}
	for (int i = 0; i < length; i++){
		cout << b[i] << " ";
		if (i == length - 1) cout << endl;
	}
}

