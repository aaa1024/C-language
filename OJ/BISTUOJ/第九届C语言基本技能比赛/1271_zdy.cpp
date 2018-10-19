#include<cstdio>
#include<cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,zhi,magic;
    cin >> n;
    while(n--){
    	int situation[1000][2];
    	int cishu=0,i,j;
        scanf("%d%d",&zhi,&magic);
        for(i=0;i<zhi;i++){
        	scanf("%d%d", &situation[i][0], &situation[i][1]);
		}
		for(i=0;i<zhi;i++){
			magic-=situation[i][0]*situation[i][1];
			
			if(magic<=0){
				break;
			}
			cishu+=situation[i][0];
		}
		
		if(i==zhi){
				printf("%d",cishu);
		}
		else{
			for(j=1;j<=situation[i][0],magic>0;j++){
				magic-=j*situation[i][1];
			}
			printf("%d",cishu+j-1);
		}
    }
   
    return 0;
}
    

