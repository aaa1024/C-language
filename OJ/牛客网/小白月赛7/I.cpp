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
   // freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int n, x;
	bool mark[100007];
	while (cin >> n){
		set <int> beishan;
		ms(mark);
		string cmd;
		int cap = 0;
		for (int i = 1; i <= n; i++){
			cin >> cmd;
			if (cmd == "Delete"){
				cin >> x;
				if (beishan.find(x) == beishan.end() && x <= cap){
					printf("Successful\n");
					beishan.insert(x);
				}
				else{
					printf("Failed\n");
				}
			}
			else{
				if(beishan.empty()){
					printf("%d\n", ++cap);
				}
				else{
					printf("%d\n", *beishan.begin());
					beishan.erase(*beishan.begin());
				}
			}
		}
	}
    return 0;
}