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
#define maxn 200007
const int inf = 0x3f3f3f3f;
int N, Q, R;
struct athlete{
	//s代表分数，w代表实力, n代表编号
	int s;
	int w;
	int n;
	athlete(){}
	athlete(athlete &other){
		this->s = other.s;
		this->w = other.w;
	}
	athlete(int S, int W){s = S; w = W;}
	
	bool operator<(athlete &other){
		return this->s < other.s;
	}
	


};
athlete a[100];
athlete Max(inf, inf);
void merge(int p, int r, int q){
	int n1 = r - p + 1; //[p, r]放在数组L
	int n2 = q - r; //[r + 1, q]放一个数组R
	athlete L[n1 + 1], R[n2 + 1]; //预留一个放正无穷
	//把[p, r]挪到L数组里
	for (int i = p; i < n1 + p; i++){
		L[i - p] = a[i];
	}
	L[n1] = Max; //最后一位放正无穷

	//把[r + 1, q]放到R数组里
	for (int i = r + 1; i < n2 + r + 1; i++){
		R[i - (r + 1)] = a[i];
	}
	R[n2] = Max;//最后一位放正无穷
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
void print(){
	printf("fenshu\n");
	for (int i = 1; i <= 2 * N; i++){
		cout << a[i].s << " ";
	}
	cout << endl;
	printf("shili\n");
	for (int i = 1; i <= 2 * N; i++){
		cout << a[i].w << " ";
	}
	cout << endl;
	printf("xuhao\n");
	for (int i = 1; i <= 2 * N; i++){
		cout << a[i].n << " ";
	}
	cout << endl;
	cout << endl;
}
bool cmp(struct athlete a, struct athlete b){
	return a.s < b.s;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	cin >> N >> R >> Q;
	for (int i = 1; i <= 2 * N; i++){
		cin >> a[i].s;
		a[i].n = i;
	}
	for (int i = 1; i <= 2 * N; i++){
		cin >> a[i].w;
	}
	sort(a + 1, a + N + 1, cmp);
	//print();
	for (int i = 1; i <= R; i++){
		sort(a + 1, a + N + 1);
		for (int j = 1; j <= 2 * N; j += 2){
			if (a[j].w < a[j + 1].w){
				a[j + 1].s++;
			}
			else{
				a[j].s++;
			}
		}
	//	print();
	}
	cout << a[Q].n << endl;
    return 0;
}