#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, cnt = 0;
	std::vector<pair<int, int>> T1, T2;
	int a, b;
	cin >> n;
	for (int i = 1; i < n; i++){
		cin >> a >> b;
		if (a > b) swap(a, b);
		T1.emplace_back(make_pair(a, b));
	}
	for (int i = 1; i < n; i++){
		cin >> a >> b;
		if (a > b) swap(a, b);
		T2.emplace_back(make_pair(a, b));
	}
	sort(T1.begin(), T1.end());
	sort(T2.begin(), T2.end());
	for (auto i = T1.begin(); i != T1.end(); ++i){
		if (!binary_search(T2.begin(), T2.end(), *i)){
			cnt++;
		}
	}
	for (auto i = T2.begin(); i != T2.end(); ++i){
		if (!binary_search(T1.begin(), T1.end(), *i)){
			cnt++;
		}
	}
	if (cnt % 2 == 0){
		cout << cnt / 2 << endl;
	}
	else {
		cout << -1 << endl;
	}
}