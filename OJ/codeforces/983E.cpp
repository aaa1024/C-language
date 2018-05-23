#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
#define inc(i,l,r) for(int i=l;i<=r;i++)
#define dec(i,r,l) for(int i=r;i>=l;i--)
const int MAXN=2e5+10;
const int K=20;
using namespace std;
vector<int>vec[MAXN];
int num[MAXN],son[MAXN],fa[MAXN],dep[MAXN],f[MAXN];
int st[MAXN][21];
int n,m,q;
ll read(){
    ll x=0,f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
    while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
    return f*x;
}
void dfs1(int v,int pre,int deep){
    num[v]=1;fa[v]=pre;dep[v]=deep+1;
    for(int i=0;i<vec[v].size();i++){
        int u=vec[v][i];
        if(u!=pre){
            dfs1(u,v,deep+1);
            num[v]+=num[u];
            if(son[v]==-1||num[son[v]]<num[u])son[v]=u;
        }
    }
}
int p[MAXN],fp[MAXN],cnt,tp[MAXN],rt[MAXN];
void dfs2(int v,int td){
    p[v]=++cnt;fp[cnt]=v;tp[v]=td;
    if(son[v]!=-1) dfs2(son[v],td);
    for(int i=0;i<vec[v].size();i++)if(son[v]!=vec[v][i]&&vec[v][i]!=fa[v])dfs2(vec[v][i],vec[v][i]);
}
int Lca(int u,int v){
    int uu=tp[u];int vv=tp[v];
    while(uu!=vv){
        if(dep[uu]<dep[vv]) swap(uu,vv),swap(u,v);
        u=fa[uu];uu=tp[u];
    }
    if(dep[u]>dep[v]) swap(u,v);
    return u;
}
typedef struct node{
    int l,r,sum;
}node;
node d[MAXN*45];int cnt1;
int querty(int u,int v){
    if(u==v) return 0;
    if(dep[st[v][K]]>dep[u]) return -1;
    int ans1=1,t=v;
//  cout<<p[st[v][K]]<<" "<<p[u]<<endl;
    for(int i=K;i>=0;i--){
    if(dep[st[t][i]]>dep[u])ans1+=(1<<i),t=st[t][i];
//  cout<<p[st[t][i]]<<" "<<p[u]<<endl;
}
    return ans1;
}
void update(int &x,int y,int l,int r,int t){
//  cout<<l<<":::"<<r<<" "<<t<<endl;
    x=++cnt1;d[x]=d[y];d[x].sum++;
//  cout<<d[x].sum<<endl;
    if(l==r) return ;
    int mid=(l+r)>>1;
    if(t<=mid) update(d[x].l,d[y].l,l,mid,t);
    else update(d[x].r,d[y].r,mid+1,r,t);
}
int ans=0;
void Sum(int x,int y,int l,int r,int ql,int qr){
//  cout<<l<<" "<<r<<" "<<ans<<" "<<d[y].sum<<endl;
    if(ql<=l&&r<=qr){ans+=(d[y].sum-d[x].sum);return ;}
    int mid=(l+r)>>1;
    if(ql<=mid) Sum(d[x].l,d[y].l,l,mid,ql,qr);
    if(qr>mid) Sum(d[x].r,d[y].r,mid+1,r,ql,qr);
}
int erfen(int v,int mid){
    int vv=tp[v];
    while(1){
        int t=p[v]-p[vv];
        if(mid<=t) return fp[p[v]-mid];
        mid-=(t+1);v=fa[vv];vv=tp[v];
    }
}
bool check(int u,int v){if(p[v]>p[u])swap(v,u);ans=0;Sum(rt[p[v]-1],rt[p[v]+num[v]-1],1,n,p[u],p[u]+num[u]-1);return ans>0;}
int slove(int u,int v){
    if(u==v) return 0;
    int lca=Lca(u,v);
    if(lca==u||lca==v){
        if(dep[u]>dep[v]) swap(u,v);
        return querty(u,v);    
    }
    if(dep[st[u][K]]>dep[lca]) return -1;
    int ans3=0,t=u;
    for(int i=K;i>=0;i--)if(dep[st[t][i]]>dep[lca])ans3+=(1<<i),t=st[t][i];
//  cout<<ans3<<endl;
    int l=0;int r=dep[v]-dep[lca]-1;int z=dep[v]-dep[lca];
    //cout<<l<<" "<<r<<endl;
//  cout<<"::::"<<t<<endl;
    while(l<=r){
        int mid=(l+r)>>1;
    //  cout<<t<<"---"<<erfen(v,mid)<<endl;
//      cout<<l<<" "<<r<<" "<<erfen(v,mid)<<endl;
        if(check(t,erfen(v,mid)))z=mid,r=mid-1;
        else l=mid+1;
//      cout<<l<<" "<<r<<" "<<z<<endl;
    }
//  cout<<erfen(v,z)<<endl;
    int ttt=querty(erfen(v,z),v);
//  cout<<ans3<<" "<<ttt<<endl;
    if(ttt<0) return -1;
    ans3+=(ttt+1);
    return ans3;
}
int find1(int x){
//  cout<<x<<"----"<<endl;
    if(x==f[x]) return x;
    else return f[x]=find1(f[x]);
}
void dfs3(int v){
    for(int i=1;i<=K;i++) st[v][i]=st[st[v][i-1]][i-1];
    for(int i=0;i<vec[v].size();i++)if(vec[v][i]!=fa[v])dfs3(vec[v][i]);
}
void merge(int u,int v){
//  cout<<dep[u]<<" "<<dep[v]<<" "<<u<<" "<<v<<endl;
for(u=find1(u);dep[u]>=dep[v];u=find1(u))st[u][0]=v,f[u]=fa[u];
}
typedef struct Node{
    int x,y,z;
}Node;
Node que[MAXN];
bool cmp1(Node aa,Node bb){
    return dep[aa.z]<dep[bb.z];
}
bool cmp2(Node aa,Node bb){
    return p[aa.x]<p[bb.x];
}
int main(){
    n=read();
    //m=read();q=read();
    int u,v;cnt=cnt1=0;
    for(int i=1;i<=n;i++)son[i]=-1,st[i][0]=f[i]=i;
    //for(int i=1;i<n;i++)u=read(),v=read(),vec[u].push_back(v),vec[v].push_back(u);
    inc(i,2,n)u=read(),vec[i].push_back(u),vec[u].push_back(i);
    dfs1(1,0,0);dfs2(1,1);
//  for(int i=1;i<=n;i++) cout<<p[i]<<" ";
//  cout<<endl;
    m=read();
    for(int i=1;i<=m;i++){
    u=read();v=read();
    if(u==v) continue;
    que[i].x=u,que[i].y=v,que[i].z=Lca(que[i].x,que[i].y);
}
    sort(que+1,que+m+1,cmp1);
    for(int i=1;i<=m;i++)merge(que[i].x,que[i].z),merge(que[i].y,que[i].z);
    for(int i=1;i<=m;i++)if(p[que[i].x]>p[que[i].y])swap(que[i].x,que[i].y);
//  cout<<"sb"<<endl;
//  for(int i=1;i<=n;i++) cout<<st[i][0]<<" ";
//  cout<<endl;
    dfs3(1);
    sort(que+1,que+1+m,cmp2);int t=1;
    for(int i=1;i<=cnt;i++){
        rt[i]=rt[i-1];
        for(;p[que[t].x]==i;t++)update(rt[i],rt[i],1,n,p[que[t].y]);
//      ans=0;Sum(rt[3],rt[4],1,n,5,6);
//      cout<<ans<<"==---"<<endl;
    }
//      ans=0;Sum(rt[3],rt[4],1,n,5,6);
//      cout<<ans<<"==---"<<endl;
//  cout<<"sb"<<endl;
    q=read();
    while(q--){
        u=read();v=read();
        int ans2=slove(u,v);
        if(ans2<0) puts("-1");
        else printf("%d\n",ans2);
    }
    return 0;
}