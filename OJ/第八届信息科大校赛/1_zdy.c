#include<stdio.h>
#include<string.h>
int main(void){
	char b[11];
	int k=0,i;

	while(scanf("%s",b)!=EOF){
		k = 0;
		for( i = 0;i<(int)strlen(b) - 3;i++){
			if(b[i]=='2'&&b[i+1]=='0'&&b[i+2]=='1'&&b[i+3]=='7'){
				k++;
			}
		}
		for( i = 0;i<k;i++){
			printf("8888");
		}
		printf("\n");
	}
	
}