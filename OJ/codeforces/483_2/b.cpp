#include <iostream>
#include <cstring>
using namespace std;
char a[105][105];
int cnt(int x, int y){
	int k = 0;
	if (a[x - 1][y] == '*'){
		k++;
	}
	if (a[x + 1][y] == '*'){
		k++;
	}
	if (a[x][y + 1] == '*'){
		k++;
	}
	if (a[x][y - 1] == '*'){
		k++;
	}
	if (a[x - 1][ y - 1] == '*'){
		k++;
	}
	if (a[x - 1][y + 1] == '*'){
		k++;
	}
	if (a[x + 1][y - 1] == '*'){
		k++;
	}
	if (a[x + 1][y + 1] == '*'){
		k++;
	}
	return k;
}
int main(){
	int flag = 1;
	int n, m;
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (a[i][j] == '.'){
				if (cnt(i, j) != 0){
					flag = 0;
					break;
				}
			}
			else if (a[i][j] >= '1' && a[i][j] <= '8'){
				if (cnt(i, j) != a[i][j] - '0'){
					flag = 0;
					break;
				}
			}
		}
		if (!flag) break;
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}