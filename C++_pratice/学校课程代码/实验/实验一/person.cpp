#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class Person
{
private:
	char *name;
	char gender;
	int year;
	int month;
	int day;
public:
	Person():year(1900), month(1), day(1)
	{

	}

	Person(const char *name_, const char gender_, int year_, int month_, int day_)
	{
		printf("Person(const char*, char, int, int, int)\n");
		this->name = new char [strlen(name_)];
		strcpy(this->name, name_);

		this->gender = gender_;
		this->year = year_;
		this->month = month_;
		this->day = day_;
	}

	Person(const Person &other)
	{
		printf("Person(const Person&)\n");
		this->name = new char [strlen(other.name)];
		strcpy(this->name, other.name);
		this->gender = other.gender;
		this->year = other.year;
		this->month = other.month;
		this->day = other.day;
	}
	~Person()
	{
		printf("~Person()\n");
		if (this->name != NULL)
		{
			delete [] this->name;
		}
		
	}

	void Print()
	{
		printf("name:%s\n", this->name);
		printf("gender:%c\n", this->gender);
		printf("Birthday:%d-%02d-%02d\n", this->year, this->month, this->day);
		printf("\n");
	}

	void setName(const char *name)
	{
		if (this->name != NULL)
		{
			delete [] this->name;
		}
		this->name = new char [strlen(name)];
		strcpy(this->name, name);
	}

	void setGender(const char gender)
	{
		this->gender = gender;
	}
	void setBirthday(const int year, const int month, const int day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
};

int main(){

   char name[100];

   int year, month, day;

   char gender;

   scanf("%s", name);

   scanf("%d %d %d", &year, &month, &day);

   scanf(" %c", &gender);



   Person p(name, gender, year ,month, day);

   memset(name, 0, 100);

   p.Print();

   Person s (p);

   s.Print();

   s.setName("Mark");

   s.setGender('F');
   s.setBirthday(1998, 11, 29);

   s.Print();

   p.Print();

   Person *r = new Person(s);

   r->Print();

   delete r;   

   return 0;

}
