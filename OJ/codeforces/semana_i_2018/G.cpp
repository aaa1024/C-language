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
const long long inf = 0x3f3f3f3f;
signed main(long long argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	long long t;
	cin >> t;
	while (t--){
		long long fenmuji = 1;
		long long fenzihe = 0;
		long long fenzi[5], fenmu[5], temp = 0;
		string a[5];
		cin >> a[1] >> a[2] >> a[3];
		for (long long i = 1; i <= 3; i++){
			for (long long j = 0; j < (long long)a[i].size(); j++){
				if (a[i][j] != '/'){
					temp = temp * 10 + (a[i][j] - '0');
				}
				if (a[i][j] == '/'){
					fenzi[i] = temp;
					temp = 0;
				}
				else if (j == (long long)a[i].size() - 1){
					fenmu[i] = temp;
					temp = 0;
				}
			}
		}
		for (long long i = 1; i <= 3; i++){
			fenmuji *= fenmu[i];
		//	cout << fenzi[i] << " " << fenmu[i] << endl;
		}
		//cout << fenmuji << endl;
		for (long long i = 1; i <= 3; i++){
			fenzihe += fenmuji / fenmu[i] * fenzi[i];
		}
	//	cout << fenzihe << endl;
		//cout << fenzihe + " " << fenmuji << endl;
		 printf("%lld/%lld\n", fenzihe / __gcd(fenzihe, fenmuji), fenmuji / __gcd(fenzihe, fenmuji));
	}
    return 0;
}