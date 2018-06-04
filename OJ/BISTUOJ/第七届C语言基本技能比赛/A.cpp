#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
	char a[1000], b[1000];
	while(scanf("%s%s", a, b)){
		if(strcmp(a, "end") == 0 && strcmp(b, "end") == 0) break;
		int max = -1;
		int len_a = strlen(a);
		int len_b = strlen(b);
		if (len_a < len_b){ //让a长于b
			char t[1000];
			strcpy(t, a);
			strcpy(a, b);
			strcpy(b, t);

			int temp = len_a;
			len_a = len_b;
			len_b = temp;
		}
		printf("%s %s\n", a, b);
		for (int i = 0; i < len_a; i++){
			int len = 0;
			for (int j = 0; j < len_b; j++){
				if ((i + j) >= len_a) break;
				if (a[i + j] == b[j]){
					len++;
				}
				else{
					len = 0;
				}
				if (len > max){
					max = len;
				}
			}
		}
		if ((double)max / double(len_b) >= 0.5){
			printf("Not pass\n");
		}
		else{
			printf("Pass\n");
		}
	}
	return 0;
}