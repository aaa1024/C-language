#include <iostream>
using namespace std;
unsigned int gcd(unsigned int a,unsigned int b)
{
    while(b^=a^=b^=a%=b);
    return a;
}
int main(){
	unsigned int a = 3, b = 9;
	cout << gcd(a, b);
}