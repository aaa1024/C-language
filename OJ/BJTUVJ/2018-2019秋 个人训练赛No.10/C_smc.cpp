#include<iostream>
#include<math.h>
using namespace std;
int p;
void f(char a[],int n,int k){
    a[k]++;
    int i;
    int j;
    for(i=k;i>0;i--){
        if(a[i]-'a'==p){
            a[i]='a';
            a[i-1]++;
        }
        else break;
    }
    for(i=k+1;i<n;i++)a[i]='a'+(i-k-1)%3;

   // cout<<a<<" "<<k<<endl;
}
int main(){
    char a[1010];
    int n,i;
    cin>>n>>p;
    cin>>a;
    f(a,n,n-1);
    for(i=n-1;i>=0;i--){
        int jud=0;
        while((i>=1&&a[i]==a[i-1])||(i>=2&&a[i]==a[i-1])){
            f(a,n,i);
            if(a[0]-'a'>=p){
                cout<<"NO";
                return 0;
            }
        }
        if(i<n-1&&a[i]==a[i+1]){
            f(a,n,i+1);
            i+=2;
        }
        if(i<n-2&&a[i]==a[i+2]){
            f(a,n,i+2);
            i+=3;
        }
    }
    a[n]='\0';
    if(a[0]-'a'>=p){
        cout<<"NO";
        return 0;
    }
    else {
         for(i=0;i<n;i++)cout<<a[i];
    }
}