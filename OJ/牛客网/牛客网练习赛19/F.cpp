#include <iostream>
#include <cstring>
#define maxn 100005
using namespace std;
int n;
unsigned long long int a[maxn];
void print(){
	for (int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
//	freopen("in.input", "r", stdin);
	int m, cmd, v, y, q;
	unsigned long long int x;
	while(cin >> n >> m){
		memset(a, 0, sizeof(a));
		int cnt = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < m; i++){
			cin >> cmd;
			if (cmd == 1){
				cin >> v >> x;
				a[v] = x - cnt;
			}
			else if (cmd == 2){
				cin >> y;
				cnt += y;
			}
			else if (cmd == 3){
				cin >> q;
				cout << a[q] + cnt << endl;
			}
	//		cout << "cmd:" << cmd << endl;
	//		print();
		}
	}
	return 0;
}