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
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define LOCAL



int main(int argc, char * argv[]) 
{
 	double a, b;
 	char c;
    while (~scanf("%lf%c%lf", &a, &c, &b))
    {
    	if (c == '+'){
    		printf("%.2lf+%.2lf=%.2lf\n", a, b, a + b);
    	}
    	else if (c == '-'){
     		printf("%.2lf-%.2lf=%.2lf\n", a, b, a - b);	
    	}
    	else if (c == '*'){
     		printf("%.2lf*%.2lf=%.2lf\n", a, b, a * b);	
    	}
    	else if (c == '/'){
    		if (b != 0)
     			printf("%.2lf/%.2lf=%.2lf\n", a, b, a / b);	
     		else{
     			cout << "除数为0" << endl;
     		}
    	}
    }

    return 0;
}