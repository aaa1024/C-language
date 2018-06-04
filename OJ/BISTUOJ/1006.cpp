#include<stdio.h>
#include<cmath>
#include <cstring>  //add
using namespace std; //add
int main(void){
	int n;
	while(~scanf("%d",&n)){
	//	freopen("in.txt", "r", stdin);
		int a[n];
		int b[n][2];//自然数取到0了怎么办   //change
		memset(b, 0, sizeof(b));  //add
		int star=0 ;
		int j;
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
		}
	
		for(int i=0;i<n;i++){
			for( j=0;j<n;j++){
				if(a[i]==b[j][0]){
					b[j][1]++;
					break;
				}
			}
			if(j==n){
					b[star][0]= a[i]; 
					b[star][1] ++;
					star++;
			}	
		}
		for (int i = 0; i < star; i++){
			for (int j = i + 1; j < star; j++){
				if (b[i][0] > b[j][0]){
					int t = b[j][0];
					b[j][0] = b[i][0];
					b[i][0] = t;
					t = b[j][1];
					b[j][1] = b[i][1];
					b[i][1] = t;
				}
			}
		}

		for(int i=0;i<star;i++){
				printf("%d %d\n",b[i][0],b[i][1]);
			
		}
	}
} 