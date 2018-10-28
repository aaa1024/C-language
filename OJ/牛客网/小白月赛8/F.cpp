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
#define maxn 10000007
const int inf = 0x3f3f3f3f;
void print(std::vector<ll> v){
	for (int i = 0; i < (int)v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (scanf("%d", &n) != EOF){
		vector<ll> v;
		ll num, x;
		for (int i = 0; i < n; i++){
			scanf("%lld%lld", &num, &x);
			if (num == 1){
				v.push_back(x);
			}
			else if (num == 2){
				for (auto i = v.begin(); i != v.end(); ++i){
					if (*i == x){
						v.erase(i);
						break;
					}
				}
			}
			else if (num == 3){
				ll cnt = 1;
				for (auto i = v.begin(); i != v.end(); ++i){
					if (*i == x){
						printf("%lld\n", cnt);
						break;
					}
					cnt++;
				}
			}
			else if (num == 4){
			//	printf("%d\n", v[x - 1]);
				int cnt = 1;
				for (auto i = v.begin(); i != v.end(); ++i){
					if (cnt == x){
						printf("%lld\n", *i);
						break;
					}
					cnt++;
				}
			}
			else if (num == 5){
				int flag = 0;
				ll max = -inf;
				for (int i = 0; i < (int)v.size(); i++){
					if (v[i] < x){
						if (v[i] > max){
							max = v[i];
						}
					}
				}
				printf("%lld\n", max);
			}
			else if (num == 6){
				ll min = inf;
				for (int i = 0; i < (int)v.size(); i++){
					if (v[i] > x){
						if (v[i] < min){
							min = v[i];
						}
					}
				}
				printf("%lld\n", min);
			}
			print(v);
		}
	}
    return 0;
}