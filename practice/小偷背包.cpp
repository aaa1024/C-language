#include <stdio.h>  
#include <iostream>  
using namespace std;  
int bag[1005];  
int dongtaiguihua(int s,int n)  
{  
	cout << s << " " << n << endl;
    if(s==0) return 1;  
    else if(s<0 || (s>0 && n==0)) return 0;//东西还没装完,已经没有剩余物件了;  
    else if(dongtaiguihua(s-bag[n],n-1)) return 1;  
    else return dongtaiguihua(s,n-1);  
}  
int main()  
{  
    int s,n;
    // s 
    cin>>s>>n;  
    for(int i=1;i<=n;i++)  
        cin>>bag[i];  
    if(dongtaiguihua(s,n)==0) cout<<"no!";  
    else cout<<"yes!";  
    return 0;  
}   