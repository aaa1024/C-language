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
#define maxn 105
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, a[maxn];
	while (cin >> n){
		int cnt = 0;
		int ans = -inf;
		int start = 0, end = 0;
		bool isStart = false;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		//需要判断一下连续的序列
		//是不是在以1开始或者以1000结尾
		for (int i = 2; i <= n; i++){
			if (a[i] == a[i - 1] + 1){
				cnt++;
				if (cnt > ans && isStart && i == n){
					end = n;
				}
				if (!isStart && cnt > ans){
					start = i - 1;
					isStart = true;
				}
			}
			else{
				if (cnt > ans && isStart){
					end = i - 1;
					ans = cnt;
				}
				cnt = 0;
				isStart = false;
			}
			ans = max(end - start + 1, ans);
		}
		printf("%d %d\n", start, end);
		if (a[start] != 1){
			ans--;
		}
		if (a[end] != 1000){
			ans--;
		}
		cout << ans<< endl;
	}
    return 0;
}