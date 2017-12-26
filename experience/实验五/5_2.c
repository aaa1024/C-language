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
    struct stu * head = NULL, *prev, *current;
    int i;
    for(i = 0; i < 3; i++)
    {
        current = malloc(sizeof(struct stu));
        if(head == NULL)
            head = current;
        else
            prev->next = current;
        scanf("%s", current->name);
        scanf("%d", &current->age);
        scanf("%s", current->major);
        scanf("%d", &current->Class);
        scanf("%d", &current->MathGrade);
        scanf("%d", &current->EngGrade);
        scanf("%d", &current->ProgrameGrade);
        prev = current;
    }
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", current->name);
        printf("%d\n", current->age);
        printf("%s\n", current->major);
        printf("%d\n", current->Class);
        printf("%d\n", current->MathGrade);
        printf("%d\n", current->EngGrade);
        printf("%d\n", current->ProgrameGrade);
        current = current->next;
    }
    return 0;
}
