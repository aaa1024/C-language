#include <stdio.h>
#include <string.h>
#define MAX 150
int main()
{
    char s1[ MAX ], s2[ MAX ], s3[ MAX ];//s1和s2是输入的，s3，是拿来装结果的
    int len1, len2, min;//分别代表s1的长度，s2的长度，和s1s2中最小的那个的值
    int i,k,t;//循环变量和中间值

    printf("Please input string1:");
    scanf("%s",s1);
    printf("Please input string2:");
    scanf("%s",s2);

    len1=strlen(s1); //字符串函数，就是len1等于s1的长度，下同
    len2=strlen(s2);

    min = len1 < len2 ? len1:len2;// ?:的用法:如果?前面的条件为真，则返回:前面那个值，否则返回后面一个值


    for(i = 0, k = 0; i < len1+len2; i++, k++) //其中i用于访问s3,k用于访问s1,s2
    {
        if(k < min) //min代表s1,s2中最短的那个的长度，所以从0到min中s1和s2的元素每个都要拿
        {
            s3[i] = s1[k];//举例:s3[0]=s1[0]
            s3[++i] = s2[k];//s3[1] = s2[0]
        }
        else//如果超出了min，就代表s1，s2中的最短的那个已经拿完了，现在只需要从较长的那个里拿就好了
        {
        //    printf("000\n");
            if(len2 > len1) //意思就是如果较长的那个是s2,那就从s2中取
            {
          //      printf("111\n");
                s3[i] = s2[k];//前面说了k用来访问s1,s2，所以这里用k，i只是一直跑的
            }
            else//最短的是
            {
            //    printf("222\n");
                s3[i] = s1[k];
            }
        }

    }

    s3[i]='\0';//最后的最后，要把s3的结尾加上一个字符串的结束符，这样才不会出错
    printf("Output:\n");
    printf("string:%s\n",s3);
}
