#include <stdio.h>
void gets(char *s){
	while(1){
		char c = getchar();
		if (c != '\n') *s = c;
		else break;
		s++;	
	}

	*s = '\0';
}
void strc(char *s, char *t){
	while (*s!='\0') s++;
	while (*t != '\0'){
		*s = *t;
		s++;
		t++;
	}
	*s = '\0';
}
int main(){
	char s[80], t[80];
//	fgets(s, 80, stdin);
//	fgets(t, 80, stdin);
	gets(s);
	gets(t);
	strc(s,t);
	puts(s);
	return 0;
}