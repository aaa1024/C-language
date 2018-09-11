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
		~Node(){}
		
	};
	Node *first = nullptr;
public:
	StackOfStrings(){}
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
		if (!isEmpty()){
			string item = first->item;
			first = first->next;
			return item;
		}
		else{
			return "The stack is empty!";
		}
		
	}
	~StackOfStrings(){}
	
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
}