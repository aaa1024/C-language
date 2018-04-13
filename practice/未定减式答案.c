"#include <stdio.h>
void main( )
{
int p,e,a,r,temp,key=0;
char ch;
printf(""Please input the char: "");
 printf(""\n"");
scanf(""%c"",&ch);
if(ch!='P' && ch!='E' && ch!='A' && ch!='R')
printf(""Input error!\n"");
for(p=1;p<=9;p++)
for(e=0;e<=9;e++)
if(p!=e)
for(a=1;a<=9;a++)
if(a!=p && a!=e)
for(r=0;r<=9;r++)
{
temp=ch=='A'?a:(ch=='R'?r:(ch=='P'?p:e));
if(r!=p && r!=e && r!=a && p*1000 +e*100 +a*10 +r -(a*100+r*10 +a)==p*100 +e*10 +temp)
{
key=1;
goto out;
}
}
out:if(key)
{
printf(""The ans is :\n"");
printf(""P=%d,E=%d,A=%d,R=%d\n"",p,e,a,r);
}
else
{
printf(""Dont't have ans.\n"");
}
}"
