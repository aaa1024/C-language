#include <iostream>
#include <cstring>
using namespace std;
struct A
{
	char *name;
	char *sID;
	int g;
	//默认构造函数
	A():name(NULL), sID(NULL)
	{

	}
	//初始化构造函数
	A(char *name, char *sID):name(name), sID(sID)
	{

	}
	//拷贝构造函数
	A(A &t)
	{
		name = new char [strlen(t.name)];
		strcpy(name, t.name);
		sID = new char [strlen(t.name)];
		strcpy(sID, t.sID);
	}

	void print()
	{
		cout << "name:" << name << endl;
		cout << "sID:" << sID << endl;
		cout << "nameSize:" << sizeof(name) <<endl;
		cout << "sIDsSze:" << sizeof (sID) <<endl;
	}
};
int main()
{
	A a("qwe", "123");
	a.print();

	A b;
	b = A(a);
	b.print();
}
