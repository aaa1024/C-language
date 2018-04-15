#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <climits>
#include <complex>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <bitset>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <ctime>
#include <set>
#include <map>
#include <cmath>

using namespace std;

typedef long long LL;
const int maxn = 13;
LL po[maxn] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
int but[10];
int n;
int num[maxn];

inline bool scan_d(int &num) {
    char in;
    bool ok = false;
    in = getchar();
    if(in == EOF) {
        return false;
    }
    while(in != '-' && (in < '0' || in > '9')) {
        in = getchar();
    }
    if(in == '-') { 
        ok = true;
        num = 0;
    }
    else {
        num = in - '0';
    }
    while(in = getchar(), in >= '0' && in <= '9') {
            num *= 10;
            num += in - '0';
    }
    if(ok) {
        num = -num;
    }
    return true;
}

int main() {
    while(~scan_d(n) && n) {
        int flag = 0;
        LL sum = 0;
        memset(but, 0, sizeof(but));
        for(int i = 0; i < n; i++) {
            scan_d(num[i]);
            sum += num[i];
            but[num[i]]++;
        }
        LL poi = po[n];
        for(int i = 0; i <= 9; i++) {
            if(but[i] == n) {
                flag = 1;
                break;
            }
            if(but[i] != 0) {
                poi /= po[but[i]];
            }
        }
        if(flag) {            
            for(int i = 0; i < n; i++) {
                printf("%d", num[0]);
                if(num[0] == 0) {
                    break;
                }
            }
            printf("\n");
        }
        else {
            LL ans = 0;
            sum = sum * poi / n;
            for(int i = 0; i < n; i++) {
                ans += sum;
                sum *= 10;
            }
            printf("%llu\n", ans);
        }
    }
    return 0;
}