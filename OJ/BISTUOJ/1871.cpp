#include <iostream>
#include <cstring>
#define maxn 100007
using namespace std;
int main(){
	long long n, m, k;
	while (cin >> n >> m >> k){
		long long a[maxn], q, p;
		long long Max = 0, Min = m;
		long long sum = 0;
		memset(a, 0, sizeof(a));
		for (long long i = 1; i <= m; i++){
			cin >> p >> q;
			a[q] = a[q] + 1;
			if (a[q] > Max){
				Max = a[q];
			}
		}

		for (long long i = 1; i <= n; i++){
		//	cout << a[i] << " ";
			if (a[i] < Min){
				Min = a[i];
			}
			sum += Max - a[i];
		}
		if (Max == Min){
			cout << 0 << endl;
		}
		else if (k <= Max){
			cout << "GG" << endl;
		}
		else {
			long long n = sum / (k - Max);
			if (sum % (k - Max) != 0){
				n++;
			}
			if (n < Max + 1){
				n = Max + 1;
			}
			cout << n << endl;
		}
	}
	return 0;
}