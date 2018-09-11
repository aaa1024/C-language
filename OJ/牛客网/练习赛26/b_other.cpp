#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN = 100001;
int N, K;
double p[MAXN], f[2][MAXN];
int main() {
    freopen("in.txt", "r", stdin);
    scanf("%d %d", &N, &K);
    double sum = 0;
    for(int i = 1; i <= N; i++) scanf("%lf", &p[i]), sum += p[i];
    printf("%.4lf\n", sum);
    int o = 0;
    f[o][1] = p[1]; f[o][0] = 1 - p[1];
    for(int i = 2; i <= N; i++) {
        o ^= 1;
        for(int j = 0; j <= min(i, K); j++)
            f[o][j] = f[o ^ 1][j - 1] * p[i] + f[o ^ 1][j] * (1 - p[i]);
    }
    printf("%.4lf", f[o][K]);
    return 0;
}