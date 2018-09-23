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
	string a;
	while (cin >> a){
		int flag = 0;
		transform(a.begin(), a.end(), a.begin(), ::tolower);  
		for (int i = 0; i < (int)a.size() - 2; i++){
			if (a[i] == 'b' && a[i + 1] == 'o' && a[i + 2] == 'b'){
				printf("%d\n", i);
				flag = 1;
				break;
			}s
		}
		if (!flag){
			printf("-1\n");
		}
	}
    return 0;
}