#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
int main(){
//	freopen("in.txt", "r", stdin);
	int n;
	while (~scanf("%d", &n) && n){
		string s, ans;
		int max = 0;
		map<string, int> m;
		m.clear();
		for (int i = 0; i < n; i++){
			cin >> s;
			m[s]++;
		}
		for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it){
			if (it->second > max){
				max = it->second;
				ans = it->first;
			}
		}
		cout << ans << endl;
	}
}