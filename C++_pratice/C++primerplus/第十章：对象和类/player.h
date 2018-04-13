#ifndef PLAYER_H
#define PLAYER_H

#include <string>
class Stock
{
private:
	std::string team;
	std::string name;
	double salary;
	double height;
	double weight;

public:
	Stock(std::sting team_)
	{

	}
	void show(Stock & a);
	bool cmp_height(Stock & a);
	bool cmp_weight(Stock & a);
};

class Team
{

};
#endif