#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i,j,a[100],b[100],c[100];
	while(scanf("%d%d",&n,&m)&&!(n==0&&m==0)){
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<m;i++)scanf("%d",&b[i]);
		int cnt=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i]==b[j]){
					break;
				}
			}
			if(j==m){
				c[cnt]=a[i];
				cnt++;
			}
		}
		if(cnt==0)printf("NULL\n");
		else {
			sort(c,c+cnt);
			for(i=0;i<cnt;i++)printf("%d ",c[i]);
			printf("\n");
		}
	}
	return 0;
}