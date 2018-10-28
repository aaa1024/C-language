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
#define maxn 10000007
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	vector <int> v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}
	for (auto i = v.begin(); i != v.end(); ++i){
		if (*i == 4){
			v.erase(i);
		}
	}
	for (auto i = v.begin(); i != v.end(); ++i){
		cout << (*i) << endl;
	}
    return 0;
}