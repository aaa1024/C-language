#include <iostream>
#include <algorithm>
#include <set>
#define maxn 3005
using namespace std;
long long a[maxn];

int main(){
    long long n, k;
    while (cin >> n >> k){
        int flag = 0;
        set<int> sum;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                sum.insert(a[i] + a[j]);
            }
        }
        for (int i = 0; i < n; i++){
            int temp = k - a[i];
            if (sum.find(temp) != sum.end()){
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "o hu~" << endl;
        else
            cout << "wo yo wo yo~" << endl;
    }
    return 0;
}