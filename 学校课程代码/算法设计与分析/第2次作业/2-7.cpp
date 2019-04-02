#include <stdio.h>  
#include <iostream>
using namespace std;
int main()  
{
        int n;
        int a[1000];
        cin >> n;
        for (int i = 0; i < n; i++){
                cin >> a[i];
        }  
        int i, j, k;  
        int t = 1 << n;  // 等价于算2的n次方
        // 每个值转成二进制对应一种结果
        for (i = 1; i < t; i++)  
        {  
                // j是用来逐个读取i的二进制位的
                j = i;  
                k = 0; // 第k个元素选不选，由j的最低位来决定
                printf("{");  
                while (j)  
                {  
                        if (j & 1) //看当前位是否为1，如果为1则输出第k个元素
                        { 
                                printf("%d,", a[k]);  
                        }  
                        j >>= 1;   // 左移，接着读下一位
                        ++k; // 继续判断下一个元素
                }  
                printf("}\n");  
        }  
        return 0;  
} 