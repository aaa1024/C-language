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
    struct stu * next;
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
        printf("name:");
        scanf("%s", current->name);
        printf("age:");
        scanf("%d", &current->age);
        printf("major");
        scanf("%s", current->major);
        printf("Class:");
        scanf("%d", &current->Class);
        printf("MathGrade:");
        scanf("%d", &current->MathGrade);
        printf("EngGrade:");
        scanf("%d", &current->EngGrade);
        printf("ProGrade:");
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
        printf("\n");
        current = current->next;
    }
    return 0;
}
