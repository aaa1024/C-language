#include <iostream>
#include <cstdio>
using namespace std;
int main(){
//	unsigned long long int n;
	string a;
	while (cin >> a){
		int n;
		int b[100] = {0};
		int c[] = {2, 0, 1, 8};
		int len = (int)a.size();
		int t = 0, s = 0;
		
		for (int i = a.size() - 1; i >= 0; i--){
			b[i] = a[i] - '0';
			s += b[i];
		}
		if (len <= 4){
			int i = 0;
			while (i < len){
				t *= 10;
				t += b[i];
				i++;
			}
			if (t > 2018)
			{
				n = (t - 2018) % 60;
			}
			else{
				n = 60 - (2018 - t) % 60;
			}
			if (n == 60) n = 0;
			printf("%d %d\n",ans[n][0], ans[n][1]);
		}
		else{
		for (int i = a.size() - 1, j = 3; i >= 0&&j >= 0; i--, j--){
			if (b[i] > c[j]){
				b[i] -= c[j];
			}
			else{
				b[i] = b[i] + 10 - c[j];
				b[i - 1]--;
			}
		}
		s = 0;
		for (int i = a.size() - 1; i >= 0; i--){
			s += b[i];
		}
		s %= 3;
		s += ((s+b[len - 2]) % 2) * 3;
		s *= 10;
		s += b[len - 1];
		printf("%d %d\n", ans[s][0], ans[s][1]);
		}
	}
	return 0;
}