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
void printHead(int n){
	cout << "+";
	for (int i = 1; i <= n; i++){
		cout << "-";
	}
	cout << "+" << endl;
}
void printBody(int n){
	cout << "|";
	for (int i = 1; i <= n; i++){
		cout << " ";
	}
	cout << "|" << endl;
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, m;
	while (cin >> n >> m){
		printHead(n);
		for (int i = 1; i <= m; i++){
			printBody(n);
		}
		printHead(n);
		cout << endl;
	}
    return 0;
}