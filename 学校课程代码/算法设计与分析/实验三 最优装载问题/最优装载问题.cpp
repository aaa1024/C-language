// #pragma comment(linker, "/STACK:1024000000,1024000000")
#include <stdio.h>
#include <iostream>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
#define LOCAL
const int maxn = 1e6 + 7;


int main(int argc, char * argv[]) 
{
	int n,w;
	int a[maxn];
	int cnt = 0;
	cout << "请输入集装箱的个数：" << endl;
	cin >> n;
	cout << "请输入船的重量" << endl;
	cin >> w;
	cout << "请输入每个集装箱的重量" << endl;
    for (int i = 1; i <= n; i++){
    	cin >> a[i];
    }

    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++){
    	if (w < a[i]){
    		break;
    	}
    	else{
    		cnt++;
    		w -= a[i];
    	}
    }
    cout << "最多一共能装" << cnt << "个集装箱" << endl;
    return 0;
}