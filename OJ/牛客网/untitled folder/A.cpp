#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int t;
	char n[1000];
	scanf("%d", &t);
	while (t--){
		cin >> n;
		int len = strlen(n);
		if (len == 1 && n[0] <= '1'){
			printf("%d\n", 0);
			continue;
		}
		else{
			if ((n[len - 1] - '0') % 2 == 1){
				n[len - 1] = n[len - 1] - 1;
			}
			cout << n << endl;
		}
	}
	return 0;
}