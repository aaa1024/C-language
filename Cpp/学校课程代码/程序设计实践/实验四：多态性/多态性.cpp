#include <iostream>
#include <cstring>
using namespace std;
class Employee{
protected:
	static int id;
	int id2;
	string name;
public:
	Employee(string _name = ""):name(_name){
		id++;
	}
	virtual double getSalary() = 0;
	~Employee(){}
	int getId(){
		return id2;
	}
	string getName(){
		return name;
	}
};
class Manager:virtual public Employee{
protected:
	 double fixedWage;
public:
	Manager(){}
	Manager(string _name):Employee(_name){
		fixedWage = 10000;
		id2 = id;
	}
	~Manager(){}
	double getSalary(){
		return fixedWage;
	}
};
class Technician:virtual public Employee{
protected:
	double workTime;
public:
	Technician(){}
	Technician(string _name, double _workTime):Employee(_name), workTime(_workTime){
		id2 = id;
	}
	~Technician(){}
	double getSalary(){
		return workTime * 150; 
	}
	
};
class SalesMan:virtual public Employee{
protected:
	double sales;
public:
	SalesMan(){}
	SalesMan(string _name, double _sales):Employee(_name), sales(_sales){
		id2 = id;
	}
	~SalesMan(){}
	double getSalary(){
		return sales * 0.05;
	}
};
class SalesManager:public SalesMan, public Manager{
public:
	SalesManager(){}
	SalesManager(string _name, double _sales):Employee(_name), SalesMan(_name, _sales), Manager(_name){
		fixedWage = 5000;
		id2 = id;
	}
	~SalesManager(){}
	double getSalary(){
		return fixedWage + sales * 0.05;
	}
};
int Employee::id = 1000;
int main(){
	Manager m("Alice");
	Technician t("Tony", 30);
	SalesManager s1("Howard", 1000);
	SalesMan s2("Alen", 500);
	cout << "name:" << m.getName() << " id:" << m.getId() << " salary:" << m.getSalary() << endl;
	cout << "name:" << t.getName() << " id:" << t.getId() << " salary:" << t.getSalary() << endl;
	cout << "name:" << s1.getName() << " id:" << s1.getId() << " salary:" << s1.getSalary() << endl;
	cout << "name:" << s2.getName() << " id:" << s2.getId() << " salary:" << s2.getSalary() << endl;
	return 0;
}