#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int vis[10];
int main(){
    cin>>n;
    int x,ans=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        vis[x]++;
    }
    ans+=vis[5];
    ans+=vis[4];
    ans+=vis[3];
    vis[1]-=vis[4];
     
    if(vis[3]){
        x=vis[3];
        x-=vis[2];
        vis[2]-=vis[3];
        if(x>0){
            vis[1]-=x*2;
        }  
    }
    if(vis[2]<0) vis[2]=0;
    if(vis[2]){
        x=vis[2]/2;
        ans+=x;
        vis[1]-=x;
        if(vis[2]%2){
            ans++;
            vis[1]-=3;
        }
    }
    if(vis[1]<0) vis[1]=0;
    if(vis[1]){
        ans+=vis[1]/5;
        ans+=(vis[1]%5)?1:0;
    }
    cout<<ans<<endl;
    return 0;
}
