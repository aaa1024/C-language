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
int dp[100];

void go(){

	for (int i = 1; i <= 5; i++){
		dp[i] = i;
	}
	for (int i = 6; i <= 10005; i++){
		dp[i] = min(dp[i], dp[i - 1] + 1);
		for (int j = 1; j <= i; j++){
		
		//	dp[i] = min(dp[i], )
		}
	}
}


int main(int argc, char * argv[]) 
{

    return 0;
}