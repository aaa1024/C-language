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
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 1000000000;
#define maxn 100
#define LOCAL

int main(int argc, char * argv[]) {
//	read("in.txt");
	int n;  //元素个数
	while (~scanf("%d", &n)){  //标准输入形式
		int cnt = 0;
		bool flag1 = false, flag2 = false;  //作为一个标记，false为假，即if(flag1){}因为flag1为false所以不执行
		ull a[maxn]; // unsigned long long ,就是比int更大的数据类型，暂时不用管
		//输入，个人习惯从下标1开始
		for (int i = 1; i <= n; i++){
			scanf("%lld", &a[i]);
		}

		//从下标2开始，判断是否比前一个数大
		for (int i = 2; i <= n; i++){
			//如果比前一个数大，则把flag标记
			if (a[i] > a[i - 1]){
				flag1 = 1;
			}
			if (flag1 && a[i] < a[i - 1]){ 	//如果遇到一个数比它前一个数小，则说明它开始下降。前面的flag1为真则说明前面上升过
				flag2 = 1;
			}
			if (flag2){						//如果flag2为真，则说明完成了一遍升又降的过程
				flag1 = flag2 = false;		//把他们两个设定为false，准备下一次判断
				cnt++;						//答案数自增1
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}