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
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n){
		int a[10007], b[10007];
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++){
			int j;
			for (j = i + 1; j <= n; j++){
				if (a[j] > a[i])
					break;
			}
			if (j != n + 1){
				b[i] = j;
			}
			else{
				b[i] = 0;
			}
		}
		for (int i = 1; i <= n; i++){
			if (i != 1) printf(" ");
			printf("%d", b[i]);
		}
		printf("\n");
	}
    return 0;
}