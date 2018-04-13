#include<stdio.h>
void h(int *a,int *b,int *c,int n)
{
    int i;
    if(n==1)
    {
        mv(a,c,n);
    }
    else
    {
        h(a,c,b,n+1);
        mv(a,c,n);
        h(b,a,c,n+1);
    }
    printf("a:%d%d%d%d\n",a[1],a[2],a[3],a[4]);
    printf("b:%d%d%d%d\n",b[1],b[2],b[3],b[4]);
    printf("c:%d%d%d%d\n",c[1],c[2],c[3],c[4]);
    printf("\n");
}
void mv(int *a,int *b,int n)
{
    int i,j,k;
    k=1;
    while(b[k]!=0) k++;
  //  printf("k:%d\n",k);
    for(i=n,j=k;i<=4;i++,j++)
    {
        b[j]=a[i];
        a[i]=0;
    }

}
int main()
{
 //   freopen("1.txt","w",stdout);
    int a[5]={0,4,3,2,1};
    int b[5]={0};
    int c[5]={0};
    h(a,b,c,1);
  //  mv(a, c , 4);
    printf("a:%d%d%d%d\n",a[1],a[2],a[3],a[4]);
    printf("b:%d%d%d%d\n",b[1],b[2],b[3],b[4]);
    printf("c:%d%d%d%d\n",c[1],c[2],c[3],c[4]);
    printf("\n");
    return 0;
}
