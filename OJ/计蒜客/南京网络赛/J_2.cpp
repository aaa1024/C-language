#include <cstdio>
#include <cstring>
using namespace std;
int pri[1000];
bool oula[10000];
int cnt = 0;
void init(){
	for (int i = 2; i <= 100; i++){
		for (int j = 1; j <= i; j++){
			oula[i * j] = 1;
		}
	}
	for (int i = 2; i <= 10000; i++){
		if (!oula[i]){
			pri[cnt++] = i;
		}
	}
}
int main(){
	memset(oula, 0, sizeof(oula));
	init();
	for (int i = 0; i < cnt; i++){
		printf("%d\n", pri[i]);
	}
}