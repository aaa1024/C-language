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
#define maxn 10007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n){
		int ans = -inf;
		int flag = 0;
		int a, cnt = 0;
		int b[maxn];
		int c[maxn];
		ms(b);
		ms(c);
		for (int i = 1; i <= n; i++){
			cin >> a;
			b[a]++;
			c[a] = i;
		}
		if (n == 1){
			cout << "0" << endl;
			continue;
		}
		b[0]++;
		b[1001]++;
		b[1002] = 0;
		for (int i = 0; i <= 1002; i++){
			if (b[i] == 1){
				cnt++;
			}
			else{
				if (cnt > ans && cnt >= 3){
					flag = 1;
					ans = cnt;
				}
				cnt = 0;
			}
		}
	//	printf("%d %d\n", start, end);
		if (flag){
			cout << ans - 2 << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
    return 0;
}