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
	while (scanf("%d", &n) != EOF){
		double a, b;
		double sum = 0, sum2 = 0;
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			sum += b;
			sum2 += a * b;
		}
		printf("%.1lf\n", sum2 / sum);
	}
    return 0;
}