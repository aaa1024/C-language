#include<stdio.h>
#include<string.h>

struct STUDENT
{
	long num;
	float score;
}stuList[100],stu,t;
void creat(struct STUDENT stuList[], int geshu, FILE *fp);
/*creat*/

int main()
{
    int i;
    int geshu,geshu2;
	char renshu;
	int count;
	FILE *fp;
	printf("输入学生个数");
	scanf("%d",&geshu);
	renshu=geshu+48;

    if((fp=fopen("si.txt","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
    rewind(fp);
	printf("Please input student information:\n");
	for(i=0;i<geshu;i++)
	{
		scanf("%d%f", &stuList[i].num, &stuList[i].score);
	}
    for(i=0;i<geshu;i++)
	{
		printf("%d %f\n", stuList[i].num, stuList[i].score);
	}

    fwrite(&stuList[0],sizeof(struct STUDENT),geshu,fp);
    fclose(fp);
    fp = fopen("si.txt","rb");
    fread(&geshu2, sizeof(int), 1, fp);
    printf("geshu2:%d\n",geshu2);
	count = 0;
    while (fread(&stuList[count], sizeof(struct STUDENT), 1, fp) == 1 && count < geshu)
    {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%d %f\n", stuList[count].num, stuList[count].score);
        count++;
    }
	return 0;
}
void creat(struct STUDENT stuList[], int geshu, FILE *fp)
{

	 //   fwrite(&library[filecount], size, count - filecount, pbooks);
    fwrite(&stuList[0],sizeof(struct STUDENT),geshu,fp);
 //   fclose(fp);
}

