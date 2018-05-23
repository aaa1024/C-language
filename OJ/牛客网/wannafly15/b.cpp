#include <iostream>
#include <algorithm>
#define maxn 100005
using namespace std;
int main(){
	int n, t;
	while (cin >> n){
        int ans = 0;
        int mark[maxn] = {0};
        for (int i = 0; i < n; i++){
            cin >> t;
            mark[t]++;
        }
        ans += mark[5];
        if (mark[1] >= mark[4]){
            mark[1] -= mark[4];
            ans += mark[4];
            mark[4] = 0;
        }
        else{
            ans += mark[4];
            mark[1] = 0;
            mark[4] = 0;
        }

        if (mark[2] >= mark[3]){
            mark[2] -= mark[3];
            ans += mark[3];
            mark[3] = 0;
        }
        else{
            mark[3] -= mark[2];
            ans += mark[2];
            mark[2] = 0;
        }

        if (mark[1] == 0){
            if (mark[3] != 0){
                ans += mark[3];
            }
            else{
                ans += mark[2] / 2 + mark[2] % 2;
            }
        }
        else{
            if (mark[3] != 0){
                if (mark[1] <= mark[3] * 2){
                    ans += mark[3];
                }
                else{
                    ans += mark[3];
                    mark[1] -= mark[3] * 2;
                    ans += mark[1] / 5;
                    if (mark[1] % 5 != 0){
                        ans++;
                    }
                }
            }
            else{
            	mark[4] += mark[2] / 2;
            	if (mark[2] % 2 != 0){
            		mark[2] = 1;
            	}
            	else {
            		mark[2] = 0;
            	}

            	if (mark[4] >= mark[1]){
            		ans += mark[4];
            		mark[1] = 0;

            		if (mark[2] == 1)
            			ans++;
            	}
            	else{
            		ans += mark[4];
            		mark[1] -= mark[4];

            		if (mark[2] == 0){
            			ans += mark[1] / 5;
            			if (mark[1] % 5 != 0){
            				ans++;
            			}
            		}
            		else{
            			if (mark[1] >= 3){
            				mark[1] -= 3;
            				ans++;
            				mark[2] = 0;
            				ans += mark[1] / 5;
            				if (mark[1] % 5 != 0){
            					ans++;
            				}
            			}
            			else{
            				ans++;
            			}
            		}
            	}
            }
        }
        cout << ans << endl;
	}
}
