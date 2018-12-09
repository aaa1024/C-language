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
#define maxn 100007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("B.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n){
		int ans = 0;
		string s;
		cin >> s;
		int cntS = 0, cntG = 0;
		int sumCntS = 0, sumCntG = 0;
		int maxSumCntG = 0, curCntG = 0;
		vector<int> G;
		for (int i = 0; i < n; i++){
			if (s[i] == 'G'){
				sumCntG++;
				curCntG++;
				if (maxSumCntG < curCntG){
					maxSumCntG = curCntG;
				}
			}
			else if (s[i] == 'S'){
				curCntG = 0;
				sumCntS++;
			}
		}
		for (int i = 0; i < n; i++){
			if (s[i] == 'G' && i != n - 1){
				cntG++;
			}
			else if ((s[i] == 'S' && (s[i - 1] == 'G' || s[i + 1] == 'G'))|| (s[i] == 'G' && i == n - 1)){
				if ((s[i] == 'G' && i == n - 1)){
					cntG++;
				}
				if (s[i] == 'S'){
					cntS++;
				}
				G.push_back(cntG);
				cntG = 0;
				if ((int)G.size() >= 2 && sumCntS >= 1){
					ans = max(ans, G[(int)G.size() - 1] + G[(int)G.size() - 2]);
				}
			}
		}
		if (ans != 0){
			cout << ans + 1 << endl;
		}
		else{
			if (cntS == 0){
				cout << sumCntG << endl;
			}
			else if (cntS == 1){
				cout << maxSumCntG << endl;
			}
			else if (cntS == n){
				cout << 0 << endl;
			}
		}
	}
    return 0;
}