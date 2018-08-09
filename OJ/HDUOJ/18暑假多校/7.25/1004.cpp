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
int n;
void slove(){
	set<int> s;
	int mark = -1;
	for (int i = 1; i <= n; i++){
		s.insert(i);
	}
	for (int i = n; i >= 1; i--){
		if (s.empty()){
			break;
		}
		mark = - mark;
		s.erase(i);
		for (int j = 1; j * j <= i; j++){
			if (i % j == 0){
				s.erase(j);
				if (j != 1)
					s.erase(i / j);
			}
		}
	}
	if (mark == 1){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}
int main(int argc, char * argv[]) {
	while (scanf("%d", &n) != EOF){
		slove();
	}
    return 0;
}