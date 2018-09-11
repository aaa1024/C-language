#include<stdio.h>
int main(){
	int q,x,i;
	//scanf("%d",&q);
	//while(q--){
		for(x=1;x<100;x++){
		int sum=0;
		for(i=1;i*i<x;i++)sum+=x/i+i*(x/i-x/(i+1));
			if(i*(i-1)>x)sum-=x/(i-1);
		printf("%d ",sum+=(i*i==x)*i);
	}
	//}
	return 0;
}

//n / (n / i)  
//i += n / i;