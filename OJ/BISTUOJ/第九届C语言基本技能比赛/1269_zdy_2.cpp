#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int main(void){
    int n;

//   freopen("F.in","r",stdin);
    while(scanf("%d",&n)!=EOF && n != 0){
      char wait[1005];
      char yes[1005][30];
    	string  output[n];
    	int exit=0;
    	for(int i=0;i<n;i++){
        scanf("%s", yes[i]);    
      }
      scanf("%s", wait);       
      for(int i=0;i<n;i++){
      	if(strstr(wait , yes[i]) != NULL){
            output[exit] = yes[i];        
            exit++;	
        }
		  }
      sort(output, output + exit);   
      for(int i=0;i<exit;i++){
        	cout<<output[i];
          if (i != exit - 1){
            printf(" ");
          }
          else{
            printf("\n");
          }

		  }
    }
    return 0;

}
    

