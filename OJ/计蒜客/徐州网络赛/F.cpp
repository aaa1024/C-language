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
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int T;
	scanf("%d",&T);
	while(T--){
		pair<string, string> p;
		map<pair<string, string>, int> m;
		int n;
		scanf("%d",&n);
		while(n--){
			int k;
			scanf("%d",&k);
			for (int i = 0; i < k; i++){
				cin >> p.first >> p.second;
				if (m[p] == 0){

				}
				m[p]++;
				for (map<pair<string, string>, int>::iterator it = m.begin(); it != m.end(); ++it){
					if(it->second == 1){
						it->second = 0;
					else{
						
						break;
					}
				}
			}
		}
		for (map<pair<string, string>, int>::iterator it = m.begin(); it != m.end(); ++it){
			pair<string, string> t = it->first;
			cout << "(" << t.first <<", " << t.second << ") " << it->second << endl;
		}
	}
    return 0;
}