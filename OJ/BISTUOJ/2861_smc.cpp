#include<iostream>
#include<string.h>
using namespace std;
long long f(long long a){
    long long sum=0,i;
    for(i=2;i*i<a;i++){
        if(a%i==0)sum+=i+a/i;
    }
    return sum+1+(i*i==a)*i;
}
int main(){
    long long a[200000];
    long long i,n;
    cin>>n;
    long long sum=0;
    for(i=1;i<200000;i++)a[i]=f(i);
    for(i=2;i<=n;i++)
    {
        if(a[i]<=n&&a[a[i]]==i)sum+=i;
    }
    cout<<sum;
    return 0;
}

