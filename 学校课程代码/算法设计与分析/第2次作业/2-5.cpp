#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;
string s;	// 要处理的串
bool book[501]; // 标记元素是否被用过
int n; 	// 元素个数
int cnt = 0;
set<string> Set; // 判断重复
void dfs(int x, string t){ // x表示当前位，t表示被操作的数组
	// 如果已经遍历到底n位了，就判断然后输出
	if (x == n && Set.find(t) == Set.end()){
		cout << t << endl; // 输出
		Set.insert(t); // 插入
		cnt++; // 全局变量cnt记录答案个数
		return;
	}
	// 如果变量到第n位，但是有重复的不满足上面的条件，也得返回
	if (x == n){
		return;
	}
	// 遍历每一个元素
	for (int i = 0; i < n; i++){
		if (!book[i]){
			book[i] = 1;
			dfs(x + 1, t + s[i]);
			book[i] = 0;
		}
	}
}
int main(){
	// 归零
	memset(book, 0, sizeof(book));
	cout << "输入：" << endl;
	cin >> n;
	cin >> s;
	string t;
	// 调用
	cout << "输出" << endl;
	dfs(0, t);
	// 最后输出Set的个数，也就是不同答案的个数
	cout << Set.size() << endl;
}
