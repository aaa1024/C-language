#include <stdio.h>
struct stu
{
    char name[100];
    int age;
    char major[100];
    int Class;
    int MathGrade;
    int EngGrade;
    int ProgrameGrade;
    struct student * next;
};
int main()
{
    struct stu s[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
        scanf("%s", s[i].major);
        scanf("%d", &s[i].Class);
        scanf("%d", &s[i].MathGrade);
        scanf("%d", &s[i].EngGrade);
        scanf("%d", &s[i].ProgrameGrade);
    }
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].age);
        printf("%s\n", s[i].major);
        printf("%d\n", s[i].Class);
        printf("%d\n", s[i].MathGrade);
        printf("%d\n", s[i].EngGrade);
        printf("%d\n", s[i].ProgrameGrade);
    }
    return 0;
}
