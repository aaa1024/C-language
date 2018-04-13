#include <iostream>
using namespace std;
class Person
{
private:
	int age;
	std::string name;
	char gender;
public:
	Person():age(0), name("(null)"), gender('U')
	{

	}
	Person(int age_, std::string name_, char gender_):age(age_), name(name_), gender(gender_)
	{

	}
	Person(Person & other)
	{
		this->age = other.age;
		this->name = other.name;
		gender = other.gender;
	}
	
	Person operator= (Person & other)
	{
//		printf("operator = \n");
		this->age = other.age;
		this->name = other.name;
		gender = other.gender;
		return *this;
	}
	friend std::ostream  & operator<<(std::ostream & os, const Person &a);

	void print() const
	{
		std::cout << "age: " << this->age << "\n" << "name: " << this->name << "\n" << "gender: " << this->gender << "\n\n";
	}
};

class Nationality_Person:public Person
{
private:
	std::string Nationality;
public:
	Nationality_Person():Nationality("(null)"), Person()
	{

	}
	Nationality_Person(int age_, std::string name_, char gender_, std::string Nationality_):Person(age_, name_, gender_)
	{
		this->Nationality = Nationality_;
	}
	Nationality_Person(Nationality_Person & other):Person(other)
	{
		this-> Nationality = other.Nationality;
	}
	friend std::ostream  & operator<<(std::ostream & os, const Nationality_Person &a);
	void print() const 
	{
		std::cout << "Nationality: " << Nationality << "\n";
		Person::print();
		std::cout << "\n";
	}
};

std::ostream  & operator<<(std::ostream & os, const Person &a)
{
	std::cout << "age: " << a.age << "\n" << "name: " << a.name << "\n" << "gender: " << a.gender << "\n\n";
	return os;
}

std::ostream  & operator<<(std::ostream & os, const Nationality_Person &a)
{
	a.print();
	return os;
}
int main()
{
	Person a(20, "wlw", 'M');
	cout << a;

	Nationality_Person b(20, "wy", 'F', "China");
	//cout << b;
	b.print();

	Person pc;
	pc = b;
	cout << pc;
	pc.print();
	cout << b << endl;
	return 0;
}