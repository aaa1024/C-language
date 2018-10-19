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
	string s;
	double num[1000];
	char opera[1000];
	int k = 0, k2 = 0;
	getline(cin, s);
	for (int i = 0; i < (int)s.size(); i++){
		if (s[i] >= '0' && s[i] <= 9){
			temp = temp * 10 + (s[i] - '0');
		}
		else{
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				opera[k2++] = s[i];
			}
			temp = 0;
			num[k++] = temp;
		}
	}
	sum = 0;
	for (int i = 0; i < k2; i++){
		sum = cal(opera[i], sum, num[i + 1])
	}
    return 0;
}