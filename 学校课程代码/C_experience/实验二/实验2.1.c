#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
int main()  
{  
	int i;
    int size = 1024;   
    char* buff = (char*)malloc(size);  
	int a=0,b=0,c=0,d=0;//a������ĸ��b����ո�c�������֣�d���������ַ�
  
    // read lines 
    while(NULL != gets(buff)){  
//        printf("Read line with len: %d\n", strlen(buff));  
        printf("%s��", buff); 
		i=0;
		a=0;b=0;c=0;d=0;
		while(buff[i]!='\0')
		{
			if((buff[i]>='A'&&buff[i]<='Z')||(buff[i]>='a'&&buff[i]<='z'))
			{
				a++;
			}
			else if(buff[i]==' ')
			{
				b++;
			}
			else if(buff[i]>='0'&&buff[i]<='9')
			{
				c++;
			}
			else
			{
				d++;
			}
			i++;
		}
		printf("%d����ĸ��%d���ո�%d�����֣�%d�������ַ�\n",a,b,c,d);
    }  
      
    // free buff  
    free(buff);   
}  