#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int MAXN=50010;
struct node{
    int a;
    int c;
};//用vector，但是vector里得存连接的顶点和权值，因此用一个结构体
vector<node> cost[MAXN];
int dfs(int n){
    int ans=0;
    int l=cost[n].size();
    for(int i=0;i<l;i++){
        ans=max(ans,dfs(cost[n][i].a)+cost[n][i].c);
    }
    return ans;
}
int main(){
    freopen("tree.in", "r", stdin);
    int n;
    scanf("%d",&n);
    int a,b,c;
    int Max=0;
    node t;
    for(int i=0;i<n-1;i++){
        scanf("%d%d%d",&a,&b,&c);
        t.a=a;
        t.c=c;
        cost[b].push_back(t);
        Max=max(Max,max(a,b));
    }
    int ans=0;
    for(int i=0;i<=Max;i++){
        ans=max(ans,dfs(i));
    }
    printf("%d\n",ans);
    return 0;
}