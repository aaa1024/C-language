
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b,c,d,s;
	int e,f,g,h,i,j,mark=1;
//	srand((int)time(0));



	for(e=1;e<=10;e++)
	{
        a=rand()%9;
        b=rand()%9;
        c=rand()%3;
		switch(c)
		{
			case 0:
				printf("%d+%d=",a,b);
				s=a+b;
                break;
			case 1:
				printf("%d*%d=",a,b);
				s=a*b;
				break;
			case 2:
				printf("%d-%d=",a,b);
                s=a-b;
				break;
			case 3:
				printf("%d/%d=",a,b);
				s=a/b;
				break;

        }
        scanf("%d",&d);
        if(s==d)
        {
            printf("¹§Ï²Äã´ð¶ÔÁË£¡\n");
        }
        else{
            printf("ºÜ±§Ç¸Äã´ð´íÁË£¡\n");
        }
	}
	return 0;
}
