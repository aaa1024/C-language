#include <iostream>
#include <cstring>
using namespace std;
//一个Employee类
class Employee{
//私有成员变量：
	//静态变量表示id，
	//然后还有一个id2是给每个子类存放id的时候用的，
	//一个string类表示名字
protected:
	static int id;
	int id2;
	string name;
public:
	//初始化构造函数，只需要初始化名字。
	//但是初始化的时候静态成员变量id需要自加1
	Employee(string _name = ""):name(_name){
		id++;
	}
	//一个虚函数，返回工资
	virtual double getSalary() = 0;
	~Employee(){}
	//返回id2
	int getId(){
		return id2;
	}
	//返回名字
	string getName(){
		return name;
	}
};
//Manager类，因为最后的SalesManager要同时继承Manager和SalesMan，所以这里用虚继承
class Manager:virtual public Employee{
//一个私有成员变量表示固定工资
protected:
	 double fixedWage;
public:
	Manager(){}
	//由题意设置固定工资为10000
	//每次初始化的时候，都让id2 = id，id在初始化父类的时候自加了，所以直接赋值就好。
	Manager(string _name):Employee(_name){
		fixedWage = 10000;
		id2 = id;
	}
	~Manager(){}
	//经理只有固定工资，所以返回固定工资就好。
	double getSalary(){
		return fixedWage;
	}
};
//虚继承Employee
class Technician:virtual public Employee{
//一个私有变量表示工作时长
protected:
	double workTime;
public:
	Technician(){}
	//初始化成员函数，同样让id2 = id。
	Technician(string _name, double _workTime):Employee(_name), workTime(_workTime){
		id2 = id;
	}
	~Technician(){}
	//由题意返回工作时长乘以每小时的工资150
	double getSalary(){
		return workTime * 150; 
	}
	
};
//虚继承Employee
class SalesMan:virtual public Employee{
//一个成员变量表示销售额
protected:
	double sales;
public:
	SalesMan(){}
	//初始化，同样令id2 = id
	SalesMan(string _name, double _sales):Employee(_name), sales(_sales){
		id2 = id;
	}
	~SalesMan(){}
	//薪水为销售额的5%
	double getSalary(){
		return sales * 0.05;
	}
};
//销售经理继承了销售人员和经理
class SalesManager:public SalesMan, public Manager{
public:
	SalesManager(){}
	//固定工资为5000
	//id2 = id
	SalesManager(string _name, double _sales):Employee(_name), SalesMan(_name, _sales), Manager(_name){
		fixedWage = 5000;
		id2 = id;
	}
	~SalesManager(){}
	//返回固定工资加上销售额乘以5%
	double getSalary(){
		return fixedWage + sales * 0.05;
	}
};
//静态变量需要在类外初始化
int Employee::id = 1000;
int main(){
	//初始化一个经理，名字为Alice
	Manager m("Alice");
	//初始化一个技术人员，名字为Tony工作时间为30小时
	Technician t("Tony", 30);
	//初始化一个销售经理，名为Howard，销售额为1000
	SalesManager s1("Howard", 1000);
	//初始化销售人员，名为Allen销售额为500
	SalesMan s2("Alen", 500);
	//逐项输出
	cout << "name:" << m.getName() << " id:" << m.getId() << " salary:" << m.getSalary() << endl;
	cout << "name:" << t.getName() << " id:" << t.getId() << " salary:" << t.getSalary() << endl;
	cout << "name:" << s1.getName() << " id:" << s1.getId() << " salary:" << s1.getSalary() << endl;
	cout << "name:" << s2.getName() << " id:" << s2.getId() << " salary:" << s2.getSalary() << endl;
	return 0;
}