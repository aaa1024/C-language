#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
class StackOfStrings{
private:
	class Node
	{
	public:
		string item;
		Node *next;
	public:
		Node(){}
		~Node(){
		}
		
	};
	Node *first = nullptr;
public:
	StackOfStrings(){}
	//千万别忘了析构函数
	~StackOfStrings(){
		while (!isEmpty()){
			pop();
		}
	}
	bool isEmpty(){
		return first == nullptr;
	}
	void push(string item){
		Node *oldfist = first;
		first = new Node;
		first->item = item;
		first->next = oldfist;
	}
	string pop(){
		//弹出之后一定要记得delete！
		if (!isEmpty()){
			string item = first->item;
			Node *temp = first;
			first = first->next;
			delete temp;
			return item;
		}
		else{
			return "The stack is empty!";
		}
		
	}
	
};
int main(){
	StackOfStrings s;
	string a;
	
	while (cin >> a){
		if (a != "-"){
			s.push(a);
		}
		else{
			cout << s.pop() << endl;
		}
	}
/*
//测试析构函数是否达到析构的效果
//写一个死循环，每次声明一个栈
//看循环结束之后的析构是否释放空间
	while (1){
		StackOfStrings s;
		for (int i = 1; i <= 10; i++){
			s.push("123");
		}
	}
*/
}