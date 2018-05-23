#include <iostream>
using namespace std;
int main(){
	freopen("output.txt", "w", stdout);
	int k = 0;
	int ans[65][2] = {0};
	for (int i = 5, j = 11; i <= 10 && j <= 12; i++, j++){

		cout << "{" << i << "," << j << "},";
		ans[k][0] = i;
		ans[k][1] = j;
		if (k++ == 60){
			break;
		}
		if (i == 10) i = 0;
		if (j == 12) j = 0;
	}
}