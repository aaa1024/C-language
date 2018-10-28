

//*
#include <iostream>
#include<string>
#include<cstdio>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
typedef float myt;
ll a[100][100];
int main()
{ 
    myt x;
    cin>>x;
    myt res=0;
    ll last;
    for(ll m=1;m<=400;m++){

        ll n=2*m-1;
        myt tmp=-1.0;
        if((m-1)%2==0) tmp=1.0;
        myt sx=1.0;

        for(ll tcnt=1;tcnt<=n;tcnt++){
            sx=sx*x;
        }

        myt fac=1;
        for(ll i=1;i<=n;i++) fac=fac*i;
        tmp=tmp*sx/fac;

        res=res+tmp;
        if(abs(tmp)<1e-6) {
            last=m-1;
            break;
        }
    }
    printf("%.6f %lld\n",res,last);
    return 0;
}