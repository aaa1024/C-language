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
#define maxn 100007
const int inf = 0x3f3f3f3f;
int gao(int n){
    int t = sqrt(n);
    return (t * t == n);
}
vector<int> v;
 
bool find(int x){
    int l = 0, r = v.size();
    while (l <= r){
        int mid = (l + r) / 2;
        if (x > v[mid]){
            l = mid + 1;
        }
        else if (x < v[mid]){
            r = mid - 1;
        }
        else{
            return true;
        }
    }
    return false;
}
int main(int argc, char * argv[])
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    for (int i = 1; i * i < 2 * maxn; i++){
        v.push_back(i * i);
    }
    while (cin >> n){
        int cnt = 0;
        int a[maxn];
    //  for (int i = 0; i < v.size(); i++){
    //      cout << v[i] << " ";
    //  }
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (find(a[i] + a[j])){
                //  cout << a[i] << " " << a[j] << endl;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}