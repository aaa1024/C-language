    #include<stdio.h>
    #include<math.h>
    int main()
    {
    	long double a,b;
    	scanf("%llf%lf",&a,&b);
    	b=b/a;
    	b=log(b)/log(2);
    	printf("%d\n",(int)b+1);
    	return 0;
    }
