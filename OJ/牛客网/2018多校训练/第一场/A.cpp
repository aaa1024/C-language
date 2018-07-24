#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long int LL;
const int mod = 1e9 + 7;
LL n,m;
LL f[11111];
LL qkm(LL base, LL m){
    LL ans = 1;
    while(m){
        if(m&1) ans = ans * base % mod;
        base = base * base % mod;
        m >>= 1;
    }
    return ans;
}
LL C(int n,int m){
    return f[n] * qkm(f[m] * f[n-m] % mod, mod-2) % mod;
}
int main()
{
    f[0] = 1;
    for(int i=1;i<=2e3;i++) f[i] = f[i-1] * i % mod;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        LL c1 = C(n+m, n), c2 = C(n+m, m-1), c3 = C(n+m, n-1);
        printf("%lld\n", (c1*c1%mod-c2*c3%mod+mod)%mod);
    }
    return 0;
}