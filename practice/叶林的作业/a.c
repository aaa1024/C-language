#include <stdio.h>
#include <string.h>
int main(){
	int i, j, cmd;
	FILE *in, *out;
	char right_id[100], right_pwd[100];
	char id[100], pwd[100];
	out = fopen("out.txt", "w");
	if ((in = fopen("in.txt", "r")) == NULL){
		printf("Source file cannot be opened\n");
		return 0;
	}
	fgets(right_id, 100, in);
	right_id[strlen(right_id) - 1] = '\0';
	fgets(right_pwd, 100, in);
	printf("%s\n", right_id);
	printf("%s\n", right_pwd);
	for (i = 0; i < 15; i++){
		printf("*");
	}
	printf("\n\n");
	printf("��ӭ����ϵͳ\n");
	for (i = 0; i < 15; i++){
		printf("*");
	}
	printf("\n\n");
	for (i = 0; i < 15; i++){
		printf("*");
	}
	printf("\n");
	printf("�������û�����");
	scanf("%s", id);
	printf("���������룺");
	scanf("%s", pwd);
	if (strcmp(right_id, id) == 0 && strcmp(right_pwd, pwd)==0){
		printf("login success!\n");
		printf("�����������Ȥ�ģ�\n");
		scanf("%d", &cmd);
		if (cmd == 1){
			printf("�Ĳ���xxxxxx\n");
			fputs("�Ĳ���xxxx", out);
		}
		else if (cmd == 2){
			printf("��ɽ��xxxxxx\n");
			fputs("��ɽ��xxxx", out);
		}
		else if (cmd == 3){
			printf("����зxxxxxx\n");
			fputs("����зxxxx", out);
		}
		else if (cmd == 4){
			printf("�ӻ�Ѽxxxxxx\n");
			fputs("�ӻ�Ѽxxxxx", out);
		}
		else{
			printf("���������˳�����\n");
			return 0;
		}
	}
	else{
		printf("ID or password error!\n");
	}
	return 0;
}
