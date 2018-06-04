#include <iostream>
#include <map>
#include <cstring>
#define maxn 100005
using namespace std;
int main(){
//	freopen("Ein.input", "r", stdin);
	int n;
	pair <int,int> a[maxn];
	while (cin >> n){
		int ans = n;
		for (int i = 1; i <= n; i++){
			cin >> a[i].first >> a[i].second;
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (j == i) continue;
				if (a[i].second == a[j].first){
					ans--;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}