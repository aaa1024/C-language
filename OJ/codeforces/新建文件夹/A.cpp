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
struct dragon{
	int str,exp;
};
bool cmp(dragon a,dragon b){
	return a.str<b.str;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	char out[5][100]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int n;
	cin>>n;
	n--;
	int t=1;
	while(n>=t*5){
		n-=t*5;
		t*=2;
	}
	n/=t;
	cout<<out[n%5];
    return 0;
}