#include<stdio.h>
#include<string.h>
int main(void){
    int n;
   freopen("F.in","r",stdin);
    while(scanf("%d",&n)!=EOF && n != 0){
        char yes[n][25];
        char wait[1005];
        char output[n][25];
        int jishu=0,exit=0,repeat=0;
        char change[20];
        for(int i=0;i<n;i++){
            scanf("%s",yes[i]);
        }
        
        scanf("%s",wait);
        for(int i=0;i<n;i++){
            repeat=0;
            for(int j=0;j<strlen(wait);j++){
             //   printf("%c ", wait[j]);
                if(wait[j]==yes[i][0]){
                	jishu = 0;
                    for(int k=0;k<strlen(yes[i]);k++){
                        if(wait[j+k]==yes[i][k]){
                            jishu++;
                        }
                    }
                    if(jishu==strlen(yes[i])){
                        printf("%s\n", yes[i]);
                        strcmp(output[exit], yes[i]);
                        exit++;
                        break;
                    }
                }
            }
        }
        
        for(int i=0;i<exit;i++){
            for(int j= i + 1;j<exit-1;j++){
                strcpy(change, output[i]);
                if(strcmp(output[i],output[j])>0){
                    strcpy(change,output[i]);
                    strcpy(output[i],output[]);
                    strcpy(output[i+1],change);
                }
            }
        }
        
        
        for(int i=0;i<exit+1;i++){
            printf("%s",output[i]);
            if (i != exit)
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
