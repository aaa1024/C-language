/*
这个是最简单的重载"<<"
对象是平面空间的一个点
重载 << 的时候会输出“(x, y)”
*/

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
	//前面的就不说了，主要是这函数，就是从这里声明然后在外面实现
	friend std::ostream& operator<<(std::ostream &o, p a);
	//声明一个这种这种函数，你套用就好了，p a是一个p类型的对象，其他的都不要改
	//记住std::ostream &o，别漏了引用
	
};
//下面是这个函数的实现
std::ostream & operator<<(std::ostream &o, const p a){
		// 很简单，就是把o当作cout用就好了
		//千万记得return o, 不是零
		o << "(" << a.x << ", " << a.y << ")";
		return o;
}
int main(){
	p a(30, 2);
	std::cout << a << endl;
	return 0;
}