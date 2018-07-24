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
//	freopen("A.in", "r", stdin);
	int a[12], b;
	while (cin >> b){
		int flag1 = 0, flag2 = 0;
		ms(a);
		a[b]++;
		for (int i = 1; i < 6; i++){
			cin >> b;
			a[b]++;
		}
		for (int i = 1; i <= 10 ; i++){
			if (a[i] >= 4){
				flag1 = 1;
			}
			if (a[i] == 1){
				flag2 = 1;
			}
		}
		if (flag1){
			if (flag2){
				cout << "Bear" << endl;
			}
			else{
				cout << "Elephant" << endl;
			}
		}
		else{
			cout << "Hernia" << endl;
		}
	}
    return 0;
}