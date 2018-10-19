#include<iostream>
using namespace std;
int main (){
	long long t;
	cin>>t;
	while(t--){
		long long  n;
		cin>>n;
		long long cnt1=0, cnt2=0;
		cnt1=n/2;
		cnt2=n/5;
		cout <<min(cnt1,cnt2)<<endl;
	}
}