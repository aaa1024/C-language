#include <cstdio>

//declare namespace la which including int a
namespace la
{
	int a;
}
//declare namespace re which including int a too
namespace re
{
	int a;
}
int main()
{
	using namespace la;		//using complie
	la::a = 4;				
	printf("%d\n", la::a);
	re::a = 5;
	printf("%d\n", re::a);	
	printf("%d\n", a);		//because having using colpiled la, a mean la::a; 
}