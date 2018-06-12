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
	printf("欢迎进入系统\n");
	for (i = 0; i < 15; i++){
		printf("*");
	}
	printf("\n\n");
	for (i = 0; i < 15; i++){
		printf("*");
	}
	printf("\n");
	printf("请输入用户名：");
	scanf("%s", id);
	printf("请输入密码：");
	scanf("%s", pwd);
	if (strcmp(right_id, id) == 0 && strcmp(right_pwd, pwd)==0){
		printf("login success!\n");
		printf("请输入你感兴趣的：\n");
		scanf("%d", &cmd);
		if (cmd == 1){
			printf("文昌鸡xxxxxx\n");
			fputs("文昌鸡xxxx", out);
		}
		else if (cmd == 2){
			printf("东山羊xxxxxx\n");
			fputs("东山羊xxxx", out);
		}
		else if (cmd == 3){
			printf("和乐蟹xxxxxx\n");
			fputs("和乐蟹xxxx", out);
		}
		else if (cmd == 4){
			printf("加积鸭xxxxxx\n");
			fputs("加积鸭xxxxx", out);
		}
		else{
			printf("输入有误，退出程序！\n");
			return 0;
		}
	}
	else{
		printf("ID or password error!\n");
	}
	return 0;
}
