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
#define rep(i, n) for (int i=0; i<(n); i++)
#define Rep(i, n) for (int i=1; i<=(n); i++)
#define range(x) (x).begin(), (x).end()
#define read(x) freopen(x, "r", stdin);
const int inf = 0x3f3f3f3f;
#define maxn 1000000
#define LOCAL

int main(int argc, char * argv[]) {
//	printf("%d %d %d %d\n", isalpha('a'), isalpha('A'), isalpha('&'), isalpha('3'));
	int n;
	cin >> n;
	getchar();
	while (n--){
		char s[1000];
		int flag = 0;
		gets(s);
		//printf("%d\n", strlen(s));
		if ((s[0] >= '0' && s[0] <= '9') || (isalpha(s[0] == 0))){
			printf("不合法！\n");
		//	printf("illlegal\n");
			continue;
		}
		for (int i = 0; i < strlen(s); i++){
			if (isalpha(s[i])|| (s[i] >= '0' && s[i] <= '9') || s[i] == '_'){
				continue;
			}
			else{
				flag = 1;
				break;
			}
		}
		if (flag) printf("不合法！\n");
		else printf("合法！\n");
	//	if (flag) printf("illegal\n");
	//	else printf("legal\n");
	}
    return 0;
}