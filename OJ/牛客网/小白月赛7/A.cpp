#include<iostream>
using namespace std;
long long f(long long n)
{
    if (n < 20180001) return n + 2017;
    return 20182017;
}
int main()
{
    long long n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}