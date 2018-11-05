#define LOCAL	static
#define PROC	extern
#define TYPE	typedef
#define STRUCT	TYPE struct
#define UNION	TYPE union
#define REG	register

#define IF	if(
#define THEN	){
#define ELSE	} else {
#define ELIF	} else if (
#define FI	;}
#define END }
#define BEGIN	{

#define SWITCH	switch(
#define IN	){
#define ENDSW	}
#define FOR	for(
#define WHILE	while(
#define DO	){
#define OD	;}
#define REP	do{
#define PER	}while(
#define DONE	);
#define LOOP	for(;;){
#define POOL	}
#define SKIP	;
#define DIV	/
#define REM	%
#define NEQ	^
#define ANDF	&&
#define ORF	||

#define TRUE	(-1)
#define FALSE	0
#define LOBYTE	0377
#define STRIP	0177
#define QUOTE	0200

#define EOF	0
#define NL	'\n'
#define SP	' '
#define LQ	'`'
#define RQ	'\''
#define MINUS	'-'
#define COLON	':'
#define BREAK break;
#define START int main(){
#include <cstdio>
START
	int a = 0;
	LOOP
		printf("%d\n", a);
		a++;
		IF a == 100
		THEN
			BREAK
		END
	END
END
