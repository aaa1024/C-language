#include <stdio.h>
#include <string.h>
#define MAX 150
int main()
{
    char s1[ MAX ], s2[ MAX ], s3[ MAX ];//s1��s2������ģ�s3��������װ�����
    int len1, len2, min;//�ֱ����s1�ĳ��ȣ�s2�ĳ��ȣ���s1s2����С���Ǹ���ֵ
    int i,k,t;//ѭ���������м�ֵ

    printf("Please input string1:");
    scanf("%s",s1);
    printf("Please input string2:");
    scanf("%s",s2);

    len1=strlen(s1); //�ַ�������������len1����s1�ĳ��ȣ���ͬ
    len2=strlen(s2);

    min = len1 < len2 ? len1:len2;// ?:���÷�:���?ǰ�������Ϊ�棬�򷵻�:ǰ���Ǹ�ֵ�����򷵻غ���һ��ֵ


    for(i = 0, k = 0; i < len1+len2; i++, k++) //����i���ڷ���s3,k���ڷ���s1,s2
    {
        if(k < min) //min����s1,s2����̵��Ǹ��ĳ��ȣ����Դ�0��min��s1��s2��Ԫ��ÿ����Ҫ��
        {
            s3[i] = s1[k];//����:s3[0]=s1[0]
            s3[++i] = s2[k];//s3[1] = s2[0]
        }
        else//���������min���ʹ���s1��s2�е���̵��Ǹ��Ѿ������ˣ�����ֻ��Ҫ�ӽϳ����Ǹ����þͺ���
        {
        //    printf("000\n");
            if(len2 > len1) //��˼��������ϳ����Ǹ���s2,�Ǿʹ�s2��ȡ
            {
          //      printf("111\n");
                s3[i] = s2[k];//ǰ��˵��k��������s1,s2������������k��iֻ��һֱ�ܵ�
            }
            else//��̵���
            {
            //    printf("222\n");
                s3[i] = s1[k];
            }
        }

    }

    s3[i]='\0';//�������Ҫ��s3�Ľ�β����һ���ַ����Ľ������������Ų������
    printf("Output:\n");
    printf("string:%s\n",s3);
}
