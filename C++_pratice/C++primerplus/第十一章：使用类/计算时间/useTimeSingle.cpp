#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time()
	{
		hours = minutes = 0;
	}
	Time(int h = 0, int m = 0):hours(h), minutes(m)
	{

	}

	Time& operator+(const Time &t)
	{
		int t_minutes = this->minutes + t.minutes;
		this->minutes = t_minutes % 60;
		this->hours += (t_minutes / 60) % 24;
		this->hours = (this->hours + t.hours) % 24;
		return *this;
	}
	Time operator-(const Time& t)
	{
		int t_minutes = this->minutes + t.minutes;
		this->minutes = t_minutes % 60;
		this->hours += (t_minutes / 60) % 24;
		this->hours = (this->hours + t.hours) % 24;
		return *this;
	}
	void print()
	{
		printf("%02d:%02d\n", this->hours, this->minutes);
	}
	friend void operator<<(ostream & os, Time &t);
};

void operator<<(ostream & os, Time &t)
{
	os << t.hours << ":" << t.minutes << "\n";
} 

int main()
{
	Time a(13,5);
	Time b(12, 30);
	a.print();
	Time c = a.operator+(b);
	cout << c;
	return 0;
}