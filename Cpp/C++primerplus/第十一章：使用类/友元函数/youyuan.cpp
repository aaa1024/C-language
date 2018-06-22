#include <iostream>
using namespace std;
class p
{
private:
	double x;
	double y;
public:
	p(){
		x = 0.;
		y = 0.;
	}
	p(double x, double y){
		this->x = x;
		this->y = y;
	}
	~p(){

	}
	friend std::ostream& operator<<(std::ostream &o, p a);
	
};
std::ostream & operator<<(std::ostream &o, const p a){
		o << "(" << a.x << ", " << a.y << ")";
		return o;
}
int main(){
	p a(30, 2);
	std::cout << a << endl;
	return 0;
}