#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
int a[3005];
int n;
using namespace std;
void print(){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){

    while (cin >> n){
        int cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n - 1; j++){
                if (a[j] > a[j + 1]){
                    cnt++;
                    swap(a[j], a[j + 1]);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}