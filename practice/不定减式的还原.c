#include <stdio.h>
int s(int p, int e, int a, int r, int x)
{
    if ( p == 0 || a == 0) return 0;//��Ϊp��a�ǿ�ͷ�����֣��ǲ���Ϊ0��
    if ( p == e || p == a || p == r || e == a || e == r || a == r)
        return 0;
    if((p * 1000 + e * 100 + a * 10 + r) - (a * 100 + r * 10 + a) == (p * 100 + e * 10 + x))
        return 1;
    else
        return 0;
}
int main()
{
    int p, e, a, r, x;
    char X; //X��ʾ��Ĩ���������ĸ
    printf("Please input the char: ");
    scanf("%c", &X);
    //ÿ��pear����0��9һ��һ����
    printf("Output:\n");
    for (p = 0; p <= 9; p++)
    {
        for(e = 0; e <= 9; e++)
        {
            for(a = 0; a <= 9; a++)
            {
                for(r = 0; r <= 9; r++)
                {
                    //���������X���ж�xӦ�õ���PEAR�е���һ��
                    switch(X)
                    {
                        case 'P': x = p; break;
                        case 'E': x = e; break;
                        case 'A': x = a; break;
                        case 'R': x = r; break;
                        default:
                            printf("Input error!\n");
                            return 0;
                    }

                    if (s(p, e, a, r, x))
                    {
                        printf("The ans is :\n");
                        printf("P=%d,E=%d,A=%d,R=%d\n", p, e, a, r);
                        return 0;
                    }
                }
            }
        }
    }
    printf("Don't have ans.\n");
    return 0;
}
