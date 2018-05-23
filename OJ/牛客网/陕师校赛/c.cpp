#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while (cin >> n){
		int max = 0;
		int flag = 0;
		int a[maxn], b[maxn], s = 0, sb = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n; i++){
			s += a[i];
			cin >> b[i];
			if (i != n - 1)
				sb += b[i];
			s -= b[i];
			if (s < 0){
				flag = 1;
			}
		}
		if (flag){
			cout << -1 << endl;
			continue;
		}
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n - 1; j++){
				for (int k = j + 1; k < n - 1; k++){
					if ((a[i] + a[j] + a[k]) > max){
						max = a[i] + a[j] + a[k];
					}
				}
			}
		}

		cout << max - sb << endl;
	}
	return 0;
}
