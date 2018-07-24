#include <cstdio>
#include <iostream>
using namespace std;
//基类
class Employee{
protected:
	double salary;
	double gongling;

public:
	Employee();
	//构造函数，初始化工龄工资和每个小时的工资
	Employee(double _salary, double _gongling):salary(_salary), gongling(_gongling){
	}
	~Employee(){

	}
};
//Worker类，继承基类Employee，添加一个私有变量表示工作时长
class Worker:public Employee{
protected:
	double time;
public:
	Worker();
	//构造函数，初始化工资工龄工资还有工作时长
	Worker(double _salary, double _gongling, double _time):Employee(_salary, _gongling), time(_time){

	}
	~Worker(){

	}
	//按照题意返回工资
	double cal(){
		return (time * salary + gongling);
	}
	
};
//Manager类，继承Employee类
//添加一个变量表示工龄和基本工资
class Manager:public Employee{
protected:
	int age;
	double jiben;
public:
	Manager();
	//构造函数，初始化变量。并且让工龄工资等于工龄乘以200
	Manager(double _salary, double _gongling, int _age, double _jiben):Employee(_salary, _gongling), age(_age), jiben(_jiben){
		gongling = age * 200;
	}
	~Manager(){

	}
	//按照题意返回工资
	double cal(){
		return (jiben + gongling);
	}

};
//SalePerson类，继承Worker类
class SalePerson:public Worker{
private:
	double ticheng;
	double shoue;
public:
	SalePerson();
	~SalePerson(){

	}
	//构造函数，要初始化基类，以及销售额。再函数体内把销售提成算出来
	SalePerson(double _salary, double _time, double _gongling, double _shoue):Worker(_salary, _gongling, _time), shoue(_shoue){
		ticheng = shoue * 0.01;
	}
	//按照题意返回工资
	double cal(){
		return (ticheng + time * salary + gongling);
	}

};
int main(){
	//声明变量
	double salary, wage, time, sales, base, seniority;
	//输入，声明Worker类，并且传入参数，输出返回值。
	cout << "Please input Worker's salary, wage for seniority, and work time:" << endl;
	cin >> salary >> wage >> time;
	Worker w(salary, wage, time);
	cout << "Worker:" << w.cal() << endl;
	//输入，声明SalePerson类，并且传入参数，输出返回值。
	cout << "Please input SalePerson's salary, work time, wage for seniority, sales" << endl;
	cin >> salary >> time >> wage >> sales;
	SalePerson s(salary, time, wage, sales);
	cout << "SalePerson:" << s.cal() << endl;
	//输入，声明Manager类，并且传入参数，输出返回值。
	cout << "Please input Manager's seniority, Base salary" << endl;
	cin >> seniority >> base;
	Manager m(0, 0, seniority, base);
	cout << "Manager:" << m.cal() << endl;
	return 0;
}