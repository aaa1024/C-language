#include<stdio.h>
int main()
{
    char *available_resouces[]={
    "clor monitor",
    "big disk",
    "Cray" //�����˸����ţ����Ժ��汻�ϲ�
    "on-line drawing routhines"
    };
    int i=0;
    while(i<3)
    {
        printf("%s",*(available_resouces+i));
        i++;
    }
    return 0;
}
