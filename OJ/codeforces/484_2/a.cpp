#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	int ans = 1, cnt0 = 0;
	string s;
	cin >> n;

	cin >> s;
	if (s.size() <= 2){
		if (s.size() == 1){
			if (s[0] == '1')
			{
				ans = 1;
			}
			else{
				ans = 0;
			}
		}
		else{
			if (s[0] == s[1]){
				ans = 0;
			}
			else{
				ans = 1;
			}
		}
	}
	else{
		for (int i = 0; i < n - 1; i++){
			if (s[i] == '1' && s[i + 1] == '1'){
				ans = 0;break;
			}

			if (s[i] == '0'){
				cnt0++;
			}
			else{
				cnt0 = 0;
			}

			if (cnt0 >= 3){
				ans = 0;break;
			}

			if ((s[0] == '0' && s[1] == '0') || (s[n - 1] == '0' && s[n - 2] == '0'))
			{
				ans = 0;
				break;
			} 
		}	
	}

	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}