#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    unsigned long long int n;
    while (scanf("%llu", &n) != EOF){
        int ans[100][2];
        int k = 0;
        for (int i = 5, j = 11; i <= 10 && j <= 12; i++, j++){
            ans[k][0] = i;
            ans[k][1] = j;
            if (k++ == 60){
                break;
            }
            if (i == 10) i = 0;
            if (j == 12) j = 0;
        }
        if (n > 2018){
            n = ((n - 2018)+60) % 60;  
        }
        else{
            n = 60 - (2018 - n) % 60;
        }        
        
        printf("%d %d\n", ans[n][0], ans[n][1]);   
    }
    return 0;
}