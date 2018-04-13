#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void output(struct node *head);

int main()
{
	struct node a, b, c;
	struct node *head,*h;

	printf("Input:\n");
	/******start******/
	head=malloc(sizeof(struct node));
	h=head;
    while(scanf("%d",&head->data)&&head->data!=0)
    {
        head->next=malloc(sizeof(struct node));
        head=head->next;
        head->next=NULL;
    }

	/******end******/
	printf("Output:\n");
	output(h);
	return 0;
}

void output(struct node *head)
{
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
