#include <iostream>
#include <ctime>
typedef long long ll;
int main()
{
	using namespace std;
	ll a = 5l;
	cout << "Enter the delay time, in seconds:";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		cout << (clock() - start) / CLOCKS_PER_SEC << endl;
	cout << "done \a\n";
	return 0;
}