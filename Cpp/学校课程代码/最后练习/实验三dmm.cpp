#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Person{
protected:
    string name;
    char gender;
    int year;
    int month;
    int day;
    bool legalBirthday(const int y, const int m, const int d) const {
        if(y< 0 || m < 0 || m > 12 || d < 0 || d > 31)
            return false;
        int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(m == 2) {
            if( y% 4 != 0 || (y% 100 == 0 && y% 400 != 0)) {
                if( d <= 28)
                    return true;
                else
                    return false;
            }
            else {
                if( d <= 29)
                    return true;
                else
                    return false;
            }
        }
        if(d <= a[m - 1])
            return true;
        else
            return false;
    }
public:
    Person() : name(), gender('U'), year(1900), month(1), day(1){
        printf("Person()\n");
    }
    Person(const string& str, char g, int y, int m, int d) : name(str), gender(g) {
        printf("Person(const string&, char, int, int, int)\n");
        if(legalBirthday(y, m, d)){
            year = y, month = m, day = d;
        }
    }
    Person(const Person& other) : name(other.name), gender(other.gender), year(other.year), month(other.month), day(other.day){
        printf("Person(const Person&)\n");
    }
    ~Person(){
        printf("~Person()\n");
    }
    void setGender(char g) { gender = g;}
    void setBirthday(int y, int m, int d) {
        if(legalBirthday(y, m, d)){
            year = y, month = m, day = d;
        }
    }
    void setName(const char *str){
        name = str;
    }
    void printProperty() const {
        cout << "Name:" << name << "\n";
        cout << "Gender:" << gender << "\n";
        printf("Birthday:%d-%.2d-%.2d\n", year, month, day);
    }
};

class National_Person:public Person{
protected:
	std::string Nationality;
public:
	National_Person(){
		cout << "National_Person()" << endl;
	}
	National_Person(std::string _name, std::string _Nationality, char _gender, int _year, int _month, int _day):Person(_name, _gender, _year, _month, _day), Nationality(_Nationality){
		cout << "National_Person(const string&, const string&, char, int, int, int)" << endl;
	}
	~National_Person(){
		cout << "~National_Person()" << endl;
	}
	void setNationality(const std::string & _Nationality){
		Nationality = _Nationality;
	}
	void printNationality(){
		cout << Nationality << endl;
	}
	void printProperty(){
		Person::printProperty();
		cout << "Nationality:" << Nationality << endl;
	}
}; 


class Student:public Person{
protected:
	 std::string schoolName;
	 std::string sID;
	 int grade;
public:
	Student(){
		cout << "Student()" << endl;
	}
	Student(std::string _name, char _gender, int _year, int _month, int _day, std::string _schoolName, std::string _sID, int _grade):Person(_name, _gender, _year, _month, _day), schoolName(_schoolName), sID(_sID), grade(_grade){
		cout << "Student(const string&, char, int, int, int, const string&, const string&, int)" << endl;
	}
	~Student(){
		cout << "~Student()" << endl;
	}
	printProperty(){
		Person::printProperty();
		cout << "School Name:" << schoolName << endl;
		cout << "Student ID:" << sID << endl;
		cout << "Grade:" << grade << endl;
	}
	void setSchoolName(std::string _schoolName){
		schoolName = _schoolName;
	}
	void setStudentID(std::string _sID){
		sID = _sID;
	}
};


int main(){
    National_Person chnDmm ("¶¡÷", "CHN", 'M', 1982, 5, 3);
    cout << "chnDmm:\n";
    chnDmm.printProperty();
    chnDmm.setNationality("USA");
    chnDmm.setName("Dmm");
    chnDmm.printProperty();

    Student stuDmm("¶¡÷", 'M', 1982, 5, 3, "ZJU", "3001112322", 2000);
    cout << "stuDmm:\n";
    stuDmm.printProperty();
    stuDmm.setSchoolName("THU");
    stuDmm.setStudentID("2005016579");
    stuDmm.printProperty();

    Person dmm(stuDmm);
    dmm.setName("Gavotte");
    cout << "dmm:\n";
    dmm.printProperty(); 
    cout << "stuDmm:\n";
    stuDmm.printProperty();
   
    return 0;
}
