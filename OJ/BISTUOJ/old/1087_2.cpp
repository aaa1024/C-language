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
#define maxn 10000007
const int inf = 0x3f3f3f3f;
bool judge(int y){
	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
int s(int year,int month,int day)
{
    int i,f=0;
    int a[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(judge(year))
        a[2]=29;
    for(i=0;i<month;i++)
    {
        f+=a[i];
    }

    f=f+day;
    return (f);

}
int main(int argc, char * argv[]) 
{
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int year, month, day, year0, month0, day0;
	scanf("%d-%d-%d", &year0, &month0, &day0);
//	cout << year0 << " " << month0 << " " << day0 << endl;
	while (scanf("%d-%d-%d", &year, &month, &day) != EOF){
		int sum = 0;
		if (year > year0){
			for (int i = year0 + 1; i < year; i++){
				if (judge(i)){
					sum += 366;
				}
				else{
					sum += 355;
				}
			}
			if (judge(year0))
				sum += 366 - s(year0, month0, day0);
			else
				sum += 365 - s(year0, month0, day0);

			sum += s(year, month, day);
		}
		else{
			sum += s(year, month, day) - s(year0, month0, day0);
		}
		sum++;
		//cout << sum << endl;
		int ans = sum % 7;
		if (ans == 0){
			cout << "网游" << endl;
		}
		else if (ans == 1 || ans == 2){
			cout << "学英语" << endl;
		}
		else if (ans == 3 || ans == 4){
			cout << "学数学" << endl;
		}
		else if (ans == 5 || ans == 6){
			cout << "做AC" << endl;
		}
	}
    return 0;
}