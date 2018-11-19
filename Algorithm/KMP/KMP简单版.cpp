#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
//通过朴素的逐一对比的方法找到next[i]
//为了和课本上的思路一致，字符串从1开始，第一个是填充空格
//第二个简单版的字符串从0开始
std::vector<int> findNext(std::string a){
	std::vector<int> next;
//	a = " " + a;
//	cout << a << endl;
	int len = a.size();
	next.push_back(0); //对应next[0]，但因为数组下标从0开始，所以next[0]不用
	next.push_back(0); //next[1] = 0
	for (int i = 2; i < len; i++){ //从下标2开始计算
		int k = i - 1;  //k先取一个最大值
		while (k >= 0){
			int flag = 1;
			for (int j = 1; j < k; j++){
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
int main(){
	string a, b;
	cin >> a >> b;
	a = " " + a; //前面填充空格
	b = " " + b;
//	cout << a << endl;
//	cout << b << endl;
	vector<int> next = findNext(b);
	for (int i = 0; i < (int)next.size(); i++){
		cout << next[i] << " ";
	}
	cout << endl;
	bool flag = 1;
	for (int i = 1, j = 1; i < (int)a.size(); i++){ //i, j 都从1开始，运算过程j会变化
		if (a[i] == b[j]){
			j++;
			if (j == (int)b.size()){ //如果全都匹配到了，则break
				flag = 0;
				cout << "found at:" << i - (int)b.size() + 1 << endl;
				break;
			}
		}
		else{
			j = next[j] + 1;
		}
	}
	if (flag){
		cout << "didn't found" << endl;
	}
	cout << endl;
}