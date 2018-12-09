#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,ys,p;
    bool pd,f;
    int ans=0;
    int k[200001],c[200001]; //k表示色调，c表示最低消费
    int y[51]={0},s[51]={0},w[51];
    memset(w,-1,sizeof(w));
    cin>>n>>ys>>p;
    for(int i=1;i<=n;i++)
		cin>>k[i]>>c[i];
    for(int i=1;i<=n;i++){
		pd=0;
		if(c[i]<=p)pd=1; //判断i到j有没有低于p的客栈
		for(int j=i+1;j<=n;j++){
			if(c[j]<=p)pd=1; //判断i到j有没有低于p的客栈
			if(k[j]==k[i]){ //如果遇到色调相等的
				if(pd){
					pd=0;
					w[k[i]]=-1;
					y[k[i]]++;
					s[k[i]]+=y[k[i]];
				}
				else{
					if(w[k[i]]==-1){
						w[k[i]]=y[k[i]];
					}               
					s[k[i]]+=w[k[i]];
					y[k[i]]++;
				}
				break;
			}
		}
	}
    for(int i=0;i<ys;i++)
		ans+=s[i];
	cout<<ans;
    return 0;
}