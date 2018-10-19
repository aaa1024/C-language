#include<iostream>
#include <iomanip>
using namespace std;

long double Polynomail(double *a,double x,int n){
	long double sum = a[0];
	long double multy = 1;
	for(int i=1;i<n+1;++i){
		multy*=x;
		sum+=a[i]*multy;
	}
	return sum;
}


void transScience(long double temp){
  int flag = 0;
  while(temp/10>1){
  	temp /=10;
  	flag++;
  	}
	//printf("%.10lf",temp);
  	cout << setprecision(10);
  	cout << temp;
	printf("+e%03d\n",flag);
}

int main(){
	freopen("in.txt", "r", stdin);
	int T,N ,M;
	cin>>T;
	while(T-->0){
		double coef[1001],x[10];
		cin>>N;
		for(int i=0;i<N+1;++i){
			cin>>coef[i];
		}
		cin>>M;
		for(int i=0;i<M;++i){
			cin>>x[i];
		}
		
		for(int i=0;i<M;++i){
			transScience(Polynomail(coef,x[i],N));
		}
	
	}
	
	return 0;
}