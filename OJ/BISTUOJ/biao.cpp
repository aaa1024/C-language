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
#define maxn 200007
const int inf = 0x3f3f3f3f;
int gao(int x){
	int sum = 0;
//	if (x == 1) return 0;
	for (int i = 1; i * i<= x; i++){
		if (x % i == 0){
			sum += i;
			if (x / i != i && i != 1){
				sum += x / i;
			}
		}
	}
//	printf("x:%d, sum:%d\n", x, sum);
	return sum;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	for (int i = 1; i <= maxn; i++){
		for (int j = i + 1; j <= maxn; j++){
			if (gao(i) == j && gao(j) == i){
				printf("%d %d\n", i, j);
			}
		}
	}
    return 0;
}