#include <cstdio>
#include <iostream>
using namespace std;
class Employee{
protected:
	double salary;
	double gongling;

public:
	Employee();
	Employee(double _salary, double _gongling):salary(_salary), gongling(_gongling){
	}
	~Employee(){

	}
};
class Worker:public Employee{
protected:
	double time;
public:
	Worker();
	Worker(double _salary, double _gongling, double _time):Employee(_salary, _gongling), time(_time){

	}
	~Worker(){

	}
	double cal(){
		return (time * salary + gongling);
	}
	
};
class Manager:public Employee{
protected:
	int age;
	double jiben;
public:
	Manager();
	Manager(double _salary, double _gongling, int _age, double _jiben):Employee(_salary, _gongling), age(_age), jiben(_jiben){
		gongling = age * 200;
	}
	~Manager(){

	}
	double cal(){
		return (jiben + gongling);
	}

};
class SalePerson:public Worker{
private:
	double ticheng;
	double shoue;
public:
	SalePerson();
	~SalePerson(){

	}
	SalePerson(double _salary, double _time, double _gongling, double _shoue):Worker(_salary, _gongling, _time), shoue(_shoue){
		salary = _salary;
		gongling = _gongling;
		ticheng = shoue * 0.01;
	}
	double cal(){
		return (ticheng + time * salary + gongling);
	}

};
int main(){
	double salary, wage, time, sales, base, seniority;
	cout << "Please input Worker's salary, wage for seniority, and work time:" << endl;
	cin >> salary >> wage >> time;
	Worker w(salary, wage, time);
	cout << "Worker:" << w.cal() << endl;

	cout << "Please input SalePerson's salary, work time, wage for seniority, sales" << endl;
	cin >> salary >> time >> wage >> sales;
	SalePerson s(salary, time, wage, sales);
	cout << "SalePerson:" << s.cal() << endl;

	cout << "Please input Manager's seniority, Base salary" << endl;
	cin >> seniority >> base;
	Manager m(0, 0, seniority, base);
	cout << "Manager:" << m.cal() << endl;
	return 0;
}