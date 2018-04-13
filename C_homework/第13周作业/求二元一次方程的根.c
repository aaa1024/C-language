#include <stdio.h>
#include <math.h>

/******start******/
void resolve(double a,double b,double c);
/******end******/

int main()
{
	double a, b, c=0;
	printf("input a b c: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	resolve(a, b, c);
h
	return 0;
}

/******start******/
void resolve(double a,double b,double c)
{
    int d1;
    double x1,x2,d2;
    d1=(b*b-4*a*c)*10000;
    printf("output:\n");
    if(d1<0)
    {
        printf("无实数根\n");
        return 0;
    }
    else
    {
        ss=sqrt(d1);
      //  printf("%d\n",ss);
        d2=ss/100.0;
       // printf("%lf,d2\n",d2);
        x1=((-b+d2)/(2*a));
        x2=((-b-d2)/(2*a));
    }
    if(d1!=0)
        printf("%.2lf %.2lf\n",x1,x2);
    else
        printf("%.2lf\n",x1);
}

/******end******/
