#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,q;
class A{
    public: int c,v;
    bool operator()(A a,A b){
        return a.v>b.v;
    }
};
A s[100005];
int p[100005];
int cmp(A a,A b){
    return a.c<b.c;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    for(int i=0;i<m;i++){
        cin>>s[i].c>>s[i].v;
    }
    sort(s,s+m,cmp);
    ll ans=0;
    int j=m-1;
    priority_queue<A,vector<A>,A> q;
    for(int i=n-1;i>=0;i--){
        while(j>=0 && s[j].c>=p[i]){
            q.push(s[j]);j--;
        }
        if(q.size()==0){
            cout<<-1<<endl;
            return 0;
        }
        ans+=q.top().v;
        q.pop();
    }
    cout<<ans<<endl;
    return 0;
}