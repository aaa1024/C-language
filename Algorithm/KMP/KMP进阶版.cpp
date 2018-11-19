#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
//通过朴素的逐一对比的方法找到next[i]
//字符串从0开始，next数组第一位为-1
std::vector<int> findNext(std::string a){
	std::vector<int> next;
//	a = " " + a;
//	cout << a << endl;
	int len = a.size();
	next.push_back(-1);
	for (int i = 1; i < len; i++){
		int k = i - 1;
		while (k >= 0){
			int flag = 1;
			for (int j = 0; j < k; j++){
				if (a[j] == a[i - k + j]){ 
				//s[i]代表前k个
				//s[len - k + i]代表后k个
				//一一枚举，如果相等就继续判断下一个
					continue;
				}
				else{
					k--;//如果不等，就说明这个k不行了，得把k取小一点
					flag = 0;//表示k取当前值失败
					break;
				}
			}
			//如果取到k - 1个都完全相等，就会一直continue，不会break
			//flag = 0不会被执行
			if (flag == 1){
				break;
			}
		}
		next.push_back(k);
	}
	return next;
}
//运用递推
std::vector<int> findNext2(std::string a){
	std::vector<int> next;
//	a = " " + a;
//	cout << a << endl;
	int len = a.size();
	next.push_back(-1);
	int k = -1, j = 0;
	while (j < len - 1){
		while (k >= 0 && a[j] != a[k]){
			k = next[k];
		}
		j++;k++;
		next.push_back(k);
	}
	return next;
}

std::vector<int> findNext3(std::string a){
	std::vector<int> next;
//	a = " " + a;
//	cout << a << endl;
	int len = a.size();
	next.push_back(-1);
	int k = -1, j = 0;
	while (j < len - 1){
		while (k >= 0 && a[j] != a[k]){
			k = next[k];
		}
		j++;k++;
		if (a[j] == a[k])
			next.push_back(next[k]);
		else
			next.push_back(k);
	}
	return next;
}
int main(){
	string a, b;
	cin >> a >> b;
//	cout << a << endl;
//	cout << b << endl;
	vector<int> next = findNext(b);
	for (int i = 0; i < (int)next.size(); i++){
		cout << next[i] << " ";
	}
	cout << endl;

	vector<int> next2 = findNext2(b);
	for (int i = 0; i < (int)next2.size(); i++){
		cout << next2[i] << " ";
	}
	cout << endl;

	bool flag = 1;
	for (int i = 0, j = 0; i < (int)a.size(); i++){
		if (a[i] == b[j]){
			j++;
			if (j == (int)b.size()){
				flag = 0;
				cout << "found at:" << i - (int)b.size() + 1 << endl;
				break;
			}
		}
		else{
			j = next2[j] + 1;
		}
	}
	if (flag){
		cout << "didn't found" << endl;
	}
	cout << endl;
}