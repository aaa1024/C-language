#include<iostream> 
#include<algorithm>    
using namespace std;  
int n,r,q;  
int a[200100],win[200100],lose[200100];  
//a[i]代表按照分数排名第i位选手的序号
int s[200100],w[200100];   
bool cmp(int x,int y)  
{  
  if(s[x]==s[y])   return x<y;
  return s[x]>s[y];
}  
void merge()  
{  
  int i,j;  
  i=j=1,a[0]=0;  
  while(i<=win[0] && j<=lose[0])   //win[0]代表又几个人赢了, lose[0]代表有几个人输了
    if(cmp(win[i],lose[j]))  
      a[++a[0]]=win[i++];
    else   
      a[++a[0]]=lose[j++];  
  while(i<=win[0])a[++a[0]]=win[i++];  
  while(j<=lose[0])a[++a[0]]=lose[j++];          
}  
int main()  
{  
  cin>>n>>r>>q;n*=2;  
  for(int i=1;i<=n;i++)a[i]=i;  
  for(int i=1;i<=n;i++)cin>>s[i];  
  for(int i=1;i<=n;i++)cin>>w[i];  
  sort(a+1,a+n+1,cmp);  //将a[i]按照s[i]的大小排序
  for(int i=1;i<=r;i++)  
    {  
      win[0]=lose[0]=0;  
      for(int j=1;j<=n;j+=2)  
        if(w[a[j]]>w[a[j+1]])  //a[j]代表第j个选手的序号,w[a[j]]代表序号为j的选手的实力
          { 
            s[a[j]]++;  //a[j]代表第j个选手的序号,s[a[j]]代表序号为j的选手的分数
            win[++win[0]]=a[j];   //序号为a[j] 的选手赢了
            lose[++lose[0]]=a[j+1];   //序号为a[j + 1]的选手输了
          }  
        else  
          {  
            s[a[j+1]]++;  //同上
            win[++win[0]]=a[j+1];  
            lose[++lose[0]]=a[j];  
          }    
      merge();          
    }  
  cout<<a[q];
  return 0;  
}  