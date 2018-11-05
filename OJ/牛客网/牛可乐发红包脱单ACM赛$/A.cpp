#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = (int)1e5 + 5;
int n, u, v, cnt = 0;
vector<int> t1[MAXN], t2[MAXN];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i = 1; i < n && cin >> u >> v; ++i)
		t1[u].emplace_back(v), t1[v].emplace_back(u);
	for (int i = 1; i < n && cin >> u >> v; ++i)
		t2[u].emplace_back(v), t2[v].emplace_back(u);
	for (int i = 1; i <= n; i++)
		sort(t1[i].begin(), t1[i].end());
	for (int i = 1; i <= n; i++)
		sort(t2[i].begin(), t2[i].end());
	for (int i = 1; i <= n; ++i)
		for (auto j : t1[i])
			if (!binary_search(t2[i].begin(), t2[i].end(), j))
				cnt++;
	if (cnt % 2 == 0)
		cout << cnt / 2 << endl;
	else
		cout << -1 << endl;
}