#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;

int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	int a[26],b[26];
	char input[8];
	int n;
	while(scanf("%d",&n)!=-1){

		ms(b);
		
		while(n--)
		{
			ms(a);
			scanf("%s",input);
			for(int i=0;input[i]!='\0';i++)
				a[input[i]-'a']=1;
			for(int i=0;i<26;i++)if(!a[i])b[i]=1;
		}
		int jud=0;
		for(int i=0;i<26;i++)
			if(b[i]==0){
				printf("%c",i+'a');
				jud=1;
			}
		if(!jud)printf("0");
		printf("\n");

	}
    return 0;
}