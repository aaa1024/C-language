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
#define LOCAL
struct haha
{
	double fenzi;
	double fenmu;
	double zhi;
};
bool cmp(haha a, haha b){
	return a.zhi < b .zhi;
}
int main(int argc, char * argv[]) {
	int n; 
    while (cin >> n){
    	int k = 0;
    	haha a[20000];
    	for (int i = 1; i <= n; i++){ // i shi fenzi
    		for (int j = i + 1; j <= n; j++){
    			a[k].fenzi = i / __gcd(i, j);
    			a[k].fenmu = j / __gcd(i, j);
    			a[k++].zhi = (double)i / (double)j;
    		}
    	}
    	sort(a, a + k, cmp);
    	cout << "0/1" << endl;
    	for (int i = 0; i < k; i++){
    		if(a[i].zhi != a[i+1].zhi)
   		 		printf("%.0lf/%.0lf\n", a[i].fenzi, a[i].fenmu);
    	}
    	cout << "1/1" << endl;
    }

    return 0;
}