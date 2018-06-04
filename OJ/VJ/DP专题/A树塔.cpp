#include <iostream>
#include <cstring>
using namespace std;
int main(){
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--){
		int n;
		int a[100][100];
		int dp[100][100];
		memset(dp, 0, sizeof(dp));
		cin >> n;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= i; j++){
				cin >> a[i][j];
			}
		}

		for (int i = n; i >= 1; i--){
			for (int j = 1; j <= i; j++){
				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + a[i][j];
		//		cout << dp[i][j] << " ";
			}
		//	cout << endl;
		}
		
		cout << dp[1][1] << endl;
	}
	return 0;
}
