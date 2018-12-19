#include <iostream>
#include <list>
using namespace std;

int main(){
	
	//创建一个链表
	list<int> l;
	// 从尾部加元素
	for (int i = 1; i <= 5; i++){
		l.push_back(i);
	}
	// 1 2 3 4 5
	// 从头部加元素
	for (int i = 100; i <= 105; i++){
		l.push_front(i);
	}
	// 105 104 103 102 101 100 1 2 3 4 5
	// 正序遍历
	cout << "正序遍历" << endl;
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it){
		cout << " " << *it;
	}
	cout << endl;
	// 逆序遍历
	cout << "逆序遍历" << endl;
	for (list<int>::reverse_iterator rit = l.rbegin(); rit != l.rend(); ++rit){
		cout << " " << *rit;
	}
	cout << "" << endl;

	// 判断list是否为空,若list为空则返回true
	cout << "数组是否为空" << endl;
	cout << l.empty() << endl;

	// 输出list的元素个数
	cout << "数组元素个数" << endl;
	cout << l.size() << endl;

	// 输出list的最大容纳的元素个数
	cout << "最大容纳元素个数" << endl;
	cout << l.max_size() << endl;

	// 获取首元素
	cout << "首元素" << endl;
	cout << l.front() << endl;

	// 获取尾元素

	cout << "尾元素" << endl;
	cout << l.back() << endl;

	// 删除首元素
	l.pop_front();
	cout << "删除首元素之后:" << endl;
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it){
		cout << " " << *it;
	}
	// 104 103 102 101 100 1 2 3 4 5
	cout << endl;
	// 删除尾元素
	l.pop_back();
	cout << "删除尾元素之后:" << endl;
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it){
		cout << " " << *it;
	}
	cout << endl;
	// 104 103 102 101 100 1 2 3 4
	// 插入元素
	list<int>::iterator it = l.begin(); // 迭代器指向首元素104
	l.insert(it, 10); // 在迭代器的位置插入10，插入之后迭代器依然指向原来的位置(104)，而不是10
	cout << "在首元素插入10之后:" << endl;
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it){
		cout << " " << *it;
	}
	cout << endl;
	++it; // it指向103
	l.insert(it, 2, 30);
	cout << "插入2个30之后:" << endl;
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it){
		cout << " " << *it;
	}

}