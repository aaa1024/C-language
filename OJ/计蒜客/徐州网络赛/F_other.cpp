#include<bits/stdc++.h>
using namespace std;

const int maxn=1e5+5;

typedef pair<int,int> pii;

set<pii> G[maxn]; //一个有maxn个set的数组

int main(){
    int t,n,m,a,b,maxl;
    scanf("%d",&t);
    for(int e=0;e<t;e++){
        maxl=0; //最多特性个数
        for(int i=0;i<maxn;i++)G[i].clear();
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&m);
            maxl=max(maxl,m);
            for(int j=0;j<m;j++){
                scanf("%d%d",&a,&b);
                G[i].insert(pii(a,b)); //在每个set里插入相应的点
            }
        }
        int res=0,t=0;
        for(int i=0;i<n;i++){
            //遍历每个set
            for(set<pii>::iterator j=G[i].begin();j!=G[i].end();j++){
                int l=i+1; //从当前开始的下一个
                t=1;
                while(l<n){
                    if(G[l].count(*j)){
                        G[l].erase(*j);
                        l++;
                        t++;
                        res=max(res,t);
                    }
                    else break;
                }
            }
        }
        printf("%d\n",res);
    }
}