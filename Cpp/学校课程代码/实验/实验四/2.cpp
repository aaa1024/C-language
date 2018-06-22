#include <iostream>
#include <cstring>
using namespace std;
class Employee{
private:
	std::string name;
	double salary;
public:
	Employee(std::string _name = "", double _salary = 0):name(_name), salary(_salary){
		
	}
	virtual ~Employee(){
		cout << "~Employee()" << endl;
	}
};
class Singer:public Employee{
private:
	std::string style;
public:
	Singer(std::string _name = "", double _salary = 0, std::string _style = ""):Employee(_name, _salary), style(_style){
		
	}
	~Singer(){
		cout << "~Single()" << endl;
	}
};
int main(){
	Employee * pe = new Singer;
	delete pe;
} 
