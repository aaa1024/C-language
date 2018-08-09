#include <stdio.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define maxn 100005
#define LOCAL

int main(int argc, char * argv[]) {
	//freopen("in.txt", "r", stdin);
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++){
		int n, q, l, r, ans[maxn];
		int sum[100][maxn];
		scanf("%d%d", &n, &q);
		char s[maxn];
		scanf("%s", s);
		ms(sum);
		ms(ans);
		sum[s[0]][0] = 1;
		for (int i = 'A'; i <= 'Z'; i++){
			for (int j = 1; j < n; j++){
				if (s[j] == i){
					sum[i][j] = sum[i][j - 1] + 1;
				}
				else{
					sum[i][j] = sum[i][j - 1];
				}
			}
		}
		for (int k = 0; k < q; k++){
			scanf("%d%d", &l, &r);
			l--;r--;
			for (int i = 'A'; i <= 'Z'; i++){
				if (sum[i][r]-sum[i][l - 1] > 0){
					ans[k] = sum[i][r] - sum[i][l - 1];
					break;
				}

			}
		}
		printf("Case #%d:\n", t);
		for (int i = 0; i < q; i++){
			printf("%d\n", ans[i]);
		}
	}
    return 0;
}