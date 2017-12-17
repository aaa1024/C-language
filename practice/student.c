#include<stdio.h>

struct student
{
	int num;
	char name[40];
	float score[3];
};

void input(struct student *p);
void print(struct student *p);

int main()
{
    struct student stu[5];

	input(stu);

	print(stu);

	return 0;
}



void input(struct student *p)
{
	int i,j;

	for(i=0;i<5;i++)
	{
		printf("number: ?, name: ?");
		scanf("%d,%s",&(p+i)->num,&(p+i)->name);
		for(j=0;j<3;j++)
		{
			printf("score%d: ?",j+1);
			scanf("%f",&(p+i)->score[j]);
		}
		printf("\n");
	}


}

void print(struct student *p)
{
	int i,j;

	for(i=0;i<5;i++)
	{
		printf("number: %d, name: %s, ",(p+i)->num,(p+i)->name);
		for(j=0;j<3;j++)
			printf("score%d: %f",j+1,(p+j)->score[j]);
		printf("\n");
	}

}
