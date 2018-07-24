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
#define maxn 2005
const int inf = 0x3f3f3f3f;
#define LOCAL
char s[maxn];
int N;
void slove(){
	int l = 0, r = N - 1;
	while (l <= r){
		bool left = false;
	//	for (int i = 0; i < N; i++){  //错了，应该改成下面这样
		for (int i = 0; a + i <= b; i++){
		//	printf("%c %c\n", s[l + i], s[r - i]);
			if (s[l + i] < s[r - i]){
				left = true;
				break;
			}
			if (s[l + i] > s[r - i]){
				left = false;
				break;
			}
		}
		if (left){
			putchar(s[l++]);
		}
		else{
			putchar(s[r--]);
		}
	}
	printf("\n");
}
int main(int argc, char * argv[]) {
//	freopen("input.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> s[i];
	}
	slove();
    return 0;
}