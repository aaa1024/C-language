#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;

#define maxn 220
#define INF 0x7f7f7f7f
int cap[maxn][maxn],flow[maxn][maxn];
int pre[maxn],res[maxn];//res[i] 残量
int Edmonds_Karp(int start,int end)
{
    int maxflow=0;
    memset(flow,0,sizeof(flow));
    memset(pre,0,sizeof(pre));
    queue<int> q;
    while(true)
    {
        memset(res,0,sizeof(res));
        res[start]=INF;
        q.push(start);
        while(!q.empty()) //BFS寻找增广路
        {
            int u=q.front();
            q.pop();
            for(int v=1;v<=end;v++)
                if(!res[v]&&cap[u][v]>flow[u][v])
                {
                    res[v]=min(res[u],cap[u][v]-flow[u][v]);//start-v路径上的最小残量
                    //记录v的父亲，并加入队列中
                    pre[v]=u;
                    q.push(v);
                }
        }
        if(res[end]==0) return maxflow;//无法继续更新最大流量，则当前流已经是最大流
        for(int u=end;u!=start;u=pre[u])//从汇点往回走
        {
            flow[pre[u]][u]+=res[end];//更新正向流
            flow[u][pre[u]]-=res[end];//更新反向流
        }
        maxflow+=res[end]; //更新从s流出的总流量
    }
}
int main()
{
    //freopen("in.txt", "r", stdin);
    int t, n, m;
    cin >> t;
    while (t--){
        cin >> n >> m;
        memset(cap,0,sizeof(cap));
        
        for(int i = 0; i < m; i++)
        {
            int u,v,s;
            scanf("%d %d %d",&u,&v,&s);
            cap[u][v]+=s;//要考虑到重边问题
        }
        cout << Edmonds_Karp(0, n + 1) << endl;
    }
    return 0;
}
