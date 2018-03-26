#include <iostream>
#include <cstdio>
#include "mytime0.h"


Time::Time(int h = 0, int m = 0):hours(h), minutes(m)
{

}
Time::Time(const Time &t)
{
	this->hours = t.hours;
	this->minutes = t.minutes;
}

Time Time::operator+(const Time &other)const
{
	Time t;

	int t_minutes = this->minutes + other.minutes;

	t.minutes = t_minutes % 60;
	t.hours += (t_minutes / 60) % 24;
	t.hours = (this->hours + other.hours) % 24;
	return t;
}

void Time::operator-(const Time &t)
{
	this->minutes -= t.minutes;
	if (this->minutes < 0)
	{
		this->minutes += 60;
		this->hours--;
	}

	this->hours -= t.hours;
	if (this->hours < 0)
	{
		this->hours += 24;
	}
}

void Time::print()
{
	printf("%02d:%02d\n", this->hours, this->minutes);
}

std::ostream & operator<<(std::ostream & os, const Time &t)
{
	printf("%02d:%02d\n", t.hours, t.minutes);
} 