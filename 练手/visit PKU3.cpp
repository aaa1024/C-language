#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <bitset>
#include <vector>
#include <sstream>
#include <assert.h>
#include <cstdlib>
#include <algorithm>
using namespace std;
typedef long long  ll;
typedef pair<ll,ll> pll;
#define fori(i,l,u) for(ll (i)=(ll)(l);(i)<=(ll)(u);++(i))
#define ford(i,l,u) for(ll (i)=(ll)(l);(i)>=(ll)(u);--(i))
#define fir first
#define sec second
const ll inf=0x3fff3fff3fff3fffll;

ll n,m,cntq;
const  ll maxn=110;
ll p[maxn],cra[maxn];
bool is_cra[maxn];
int main()
{
  ios::sync_with_stdio(false);
  // freopen("local.in","r",stdin);
  while(cin>>n>>m){
    fori(i,1,n) cin>>p[i-1];
    memset(is_cra,false,sizeof(is_cra));
    cin>>cntq; fori(i,1,cntq) { cin>>cra[i-1]; is_cra[cra[i-1]]=true;}
    pair<ll,ll> ans_date;
    ll ans_val=inf;

    fori(i,0,n-1-(m-1)){
      ll fir_val,fir_id;
      ll temp_val=ans_val; pll temp_date;
      ll cnt=0;
      for(ll j=i;j<=n-1&&cnt<=m;j++){
        if(!is_cra[j]){
          cnt++;
          if(cnt>m) { cnt--; break;}
          if(cnt==1) {
            fir_val=p[j];
            fir_id=j;
          } else {
            if(fir_val+p[j]<temp_val){
              temp_val=fir_val+p[j];
              temp_date.fir=fir_id; temp_date.sec=j;
            }
          }
        }
      }
      if(cnt==m&&temp_val<ans_val){
        ans_val=temp_val;
        ans_date=temp_date;
      }

    }
    // cout<<"ans_val: "<<ans_val<<endl;
    cout<<ans_date.fir<<" "<<ans_date.sec<<endl;
  }

  return 0;
}
