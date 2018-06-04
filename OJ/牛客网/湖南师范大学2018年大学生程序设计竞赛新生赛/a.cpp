#include <iostream>
#include <algorithm>
#define maxn 3005
using namespace std;
long long a[maxn];
int find(long long low, long long high,long long target)
{
    while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]>target)
                high=mid-1;
            else if(a[mid]<target)
                low=mid+1;
            else
                return mid;
        }
    return-1;
}
int main(){
    long long n, k;
    while (cin >> n >> k){
        int flag = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long left = 0, right = n - 1;
        while (left <= right){
            if (a[left] + a[right] > k){
                right--;
            }
            else{
                if (find(left, right, k - (a[left] + a[right])) != -1){
                    flag = 1;
                    break;
                }

                if (a[right] + a[right] + a[left] == k){
                    flag = 1;
                    break;
                }

                if (a[right] + a[left] + a[left] == k){
                    flag = 1;
                    break;
                }
                if (a[right] * 3 == k){
                    flag = 1;
                    break;
                }
                if (a[left] * 3 == k){
                    flag = 1;
                    break;
                }
                left++;
                if (flag)
                break;
            }
        }
        if (flag)
            cout << "o hu~" << endl;
        else
            cout << "wo yo wo yo~" << endl;
    }
}