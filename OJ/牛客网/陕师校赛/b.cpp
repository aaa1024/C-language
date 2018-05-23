#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
int main(int argc, char const *argv[])
{
	double M;
	while (cin >> M){
		int n, v[maxn], m[maxn]; 
		double time = 0;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		for (int i = 0; i < n; i++){
			cin >> m[i];
		}

		for (int i = 0; i < n; i++){
			time += v[i] / M;
		}
		printf("%.2lf\n", time);
	}
	return 0;
}
