#include <cstdio>
using namespace std;
int main(){
	// x & 1 == 1 mean x is a odd
	
	for (int i = 1; i <= 100; i++){
		if (i & 1){
			printf("%d\n", i);
		}
	}
}