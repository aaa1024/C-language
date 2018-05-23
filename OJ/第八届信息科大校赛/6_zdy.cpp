#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(void){
	int i;
	double x;
	double temp;
	double fun(double a);
	
	while(~scanf("%lf",&x)) {
		double sum=0;
		int n=0;
		for(i=0,n=0;i>=0;n++,i=i+2){
			temp=pow(-1,n)*pow(x,i+1)/fun(i+1);
			if(fabs(temp)<pow(10,-6)){
				break;
			}
			else{
				sum+=temp;	
			}
		
		}
		printf("%.6f %d\n",sum,n);		
	
	}	
}
double fun(double a){
	double sum=1;
	double i;
	for(i=a;i>0;i--){
		sum=sum*i;
	} 
	return sum;
}