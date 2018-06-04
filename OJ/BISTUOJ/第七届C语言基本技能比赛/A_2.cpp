#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a, b;
	while (cin >> a >> b){
		double max = -1;
		if (a == "end" && b == "end") break;
		if (a.size() < b.size()) swap(a, b);    // 让a长于b
		double len_a = a.size();
		double len_b = b.size();
		for (int i = 0; i < len_a; i++){
			double len = 0;
			for (int j = 0; j < len_b; j++){
				if ((i + j) > len_a) break;    //为了防止数组越界
				if (a[i + j] == b[j]){         //如果相等就计数 
					len++;            
				}
				else{
					len = 0;                  //如果出现不等的，就清空
				}
				if (len > max){
					max = len;
				}
			}
		}
		if (max / len_b >= 0.5) cout << "Not pass" << endl;
		else cout << "Pass" << endl;
	}
	return 0;
}