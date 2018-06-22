#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int s[15];
int res[1000005];
int main(){
	cin>>n;
	int x;	
	int ans=0,maxn=100000000;
	int dex=0;
	for(int i=1;i<=9;i++){
		cin>>x;
		s[i]=x;
		ans+=n/x;
		maxn=min(x,maxn);		
	}
	dex=maxn;
	maxn=n/maxn;
	
	if(ans==0){
		cout<<-1;
		return 0;
	}
	for(int i=1;i<=maxn;i++){
		for(int j=9;j>=1;j--){
			if(n-s[j]>=(maxn-i)*dex){
				printf("%d",j);
				n-=s[j];
				break;
			}
		}
	}
	return 0;
}
