#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <cmath>
#include <set>
using namespace std;
#define maxn 100007
long long n, k, t;
long long flag = 0;
signed main()
{

	while (cin >> n >> k){
		if (n < k){
			cout << "NO" << endl;
			continue;
		}
		multiset<int> ans;
		for (int i = 0; i < 30; i++){
			if ((n >> i) & 1){
				ans.insert(i);
			}
		}
		if (ans.size() > k){
			cout << "NO" << endl;
			continue;
		}
		while ((int)ans.size() < k){
			auto it = ans.end();
			it--;
			int x = (*it);
			ans.erase(ans.lower_bound(x));
			ans.insert(x - 1);
			ans.insert(x - 1);
		}
		cout << "YES\n";
		for (int x : ans){
			cout << (1 << x) << " ";
		}
		cout << endl;
	}
    return 0;
}