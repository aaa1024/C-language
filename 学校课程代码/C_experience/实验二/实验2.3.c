#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
int main()  
{  
	int i,k;
    int size = 1024;   
    char* buff = (char*)malloc(size);  
	int a=0,b=0,c=0,d=0,e=0;//a�����д��ĸ��b����ո�c�������֣�d���������ַ���e����Сд��ĸ��
  
    for(k=0;k<3;k++){  
//        printf("Read line with len: %d\n", strlen(buff));  
		gets(buff);
        
		i=0;
//		a=0;b=0;c=0;d=0;
		while(buff[i]!='\0')
		{
			if(buff[i]>='A'&&buff[i]<='Z')
			{
				a++;
			}
				
			else if(buff[i]>='a'&&buff[i]<='z')
			{
				e++;
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
		
    }
	
    printf("����������ı�����%d����д��ĸ��%d��Сд��ĸ��%d���ո�%d�����֣�%d�������ַ�\n",a,e,b,c,d);
    // free buff  
    free(buff);   
}  