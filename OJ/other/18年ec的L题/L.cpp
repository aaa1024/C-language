#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main(){
	//freopen("15.in", "r", stdin);
	//freopen("15.out", "w", stdout); 
	int n, m, p, q;
	int a[110000], b[110000], c[110000], e, w;
	int shifouguli[11000];
	int CntGuliW;
	int CntGuliE;
	scanf("%d%d", &n, &m);
	e = 0;
	w = 0;
	CntGuliW = 0;
	CntGuliE = 0;
	memset(shifouguli, 0, sizeof(shifouguli));
	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if (a[i] == 0) w++;
		else e++;
	}
	CntGuliW = w;
	CntGuliE = e;
	for (int i = 1; i <= n; i++){
		if (a[i] == 0){
			b[i] = (w - 1) + e * 2;
		}
		else{
			b[i] = (e - 1) + w * 2;
		}
	}

	for (int i = 1; i <= m; i++){
		scanf("%d%d", &p, &q);
		if (shifouguli[p] == 0){
			if (a[p] == 0){
				CntGuliW--;
			}
			else{
				CntGuliE--;
			}
			shifouguli[p] = 1;
			b[p]--;
		}
		if (shifouguli[q] == 0){
			if (a[q] == 0){
				CntGuliW--;
			}
			else{
				CntGuliE--;
			}
			shifouguli[q] = 1;
			b[q]--;
		}
		
		
	}

	if (m == 0){
		for (int i = 1; i <= n; i++){
			if (a[i] == 0){
				printf("%d ", w - 1);
			}
			else{
				printf("%d ", e - 1);
			}
		}
		return 0;
	}
	if (n == 1){
		printf("0\n");
	}
	for (int i = 1; i <= n; i++){
		if (shifouguli[i]){
			printf("%d ", b[i]);
		}
		else{
			if (a[i] == 0){
				printf("%d ", b[i] + CntGuliE);
			}
			else{
				printf("%d ", b[i] + CntGuliW);
			}
		}
	}
	return 0;
}