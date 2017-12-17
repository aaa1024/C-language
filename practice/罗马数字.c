#include<stdio.h>
int main()
{
    int n,b[5],i = 0, c = 0, m;
    /*定义一个三维数组（可以理解成二维字符串数组），第一维的0代表个位，1代表十位，2代表百位
    第二维就是具体的数
    为了计算方便第一个0下标元素就空出来了
    */
    char a[4][11][5]={{"","I","II","III","IV","V","VI","VII","VIII","IX"},
                     {"","X","XX","XXX","XL","L","LXX","LXXX","XCC"},
                     {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"}
                    };
    printf("Please input number:");
    scanf("%d",&n);
    m = n;//只是为了保留n的值因为n要进行运算了
    //下面这行段代码是将n的每一位数都赋值到一个数组中，但是是从低位到高位的，就是说b[0]等于n的个位,b[1]=n的十位
    while(n>0)
    {
        b[c++] = n%10;  //变量c记录了n有多少位，
        n = n /10;
    }

    printf("Output:\n");
    printf("%d=",m);
    //b的下标高的元素对应的就是n的高位数
    //所以得从高位输出
    for(i = c-1; i>=0; i--) //最高位是c-1，直到输出到b[0]为止
    {
        printf("%s",a[i][b[i]]);//假如i=2,那就说明输出的是百位，而数组a中百位就对应着第一维2，所以就输入百位所在的数组里的第b[i]个元素
    }
    printf("\n");
    return 0;
}
