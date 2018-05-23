#include <bits/stdc++.h>
using namespace std;
#define maxn 1005
typedef pair<string, int> P;
P a[maxn];
bool cmp(P a, P b){
    if(a.second!=b.second)return a.second>b.second;
    return a.first>b.first;
}
int main(){
	int t, kase = 0;
	cin >> t;
	while (t--){
		int n, k;
		string name[maxn];
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a[i].first >> a[i].second;
		}
		sort(a, a + n, cmp);
		cin >> k;
		cout <<  "#" << ++kase << ": " << a[k - 1].first << " " << a[k - 1].second << endl;
	}
	return 0;
}