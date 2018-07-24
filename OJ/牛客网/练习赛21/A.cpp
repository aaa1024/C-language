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
const int inf = 0x3f3f3f3f;
#define LOCAL



int main(int argc, char * argv[]) 
{
	//freopen("A.in", "r", stdin);
	int t;
	cin >> t;
		while (t--){
			long long int a[100], c = 0;
			for (int i = 0; i < 3; i++){
				cin >> a[i];
			}
			for (int i = 0; i < 3 + c; i++){
				for (int j = i + 1; j < 3 + c; j++){
					int t = abs(a[i] - a[j]);
				//	cout << "a[i]:" << a[i] <<" a[j]:" << a[j] << endl;
				//	cout << "t:" << t << "c:" << c << endl;
					int flag = 1;
					for (int k = 0; k < 3 + c; k++){
						if (a[k] == t){
							flag = 0;
							break;
						}
					}
					if (flag){
						i = 0;
						j = 0;
						a[3 + c] = t;
						c++;
					}
				}
			}
			cout << c << endl;
		}
    return 0;
}