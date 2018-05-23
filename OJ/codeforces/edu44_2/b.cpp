#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstring>
using namespace std;
int n, m;

string a[2005];
bool judge(int x, int y){
	for (int i = 0; i < n; i++){
		if (i != x){
			if (a[i][y] != '0')
				return false;
		}
	}
	return true;
}
int main(){
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j] == '1')
			{
				if(judge(i, j)){
					cnt++;
					break;
				}
			}
		}
	}
	if (cnt == n) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}