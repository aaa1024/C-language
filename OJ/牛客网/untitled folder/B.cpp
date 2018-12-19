#include <cstdio>
#define maxn 100007
using namespace std;
int main(){
	int n;
	int a[maxn];
	while (scanf("%d", &n) != EOF){
		int sum = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			sum += a[i];
		}
		for (int i = 0; i < n; i++){
			if (sum - a[i] == a[i]){
				cnt++;
			}
		}
		if (cnt == 0){
			printf("-1\n");
		}
		else{
			printf("%d\n", cnt);
		}
	}
	return 0;
}