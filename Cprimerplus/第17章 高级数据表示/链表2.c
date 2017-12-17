#include<stdio.h>

struct f
{
    int data;
    struct f * next;
};
int main()
{
    int a;
    struct f *head = NULL,*current,*prev;
    while(scanf("%d",&a) && a != 0)
    {
        current = (struct f *)malloc(sizeof(struct f));

        if(head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        current->data = a;
        prev = current;
    }
    current = head;
    while(current != NULL)
    {
        printf("%d\n",current->data);
        current = current ->next;
    }
}
