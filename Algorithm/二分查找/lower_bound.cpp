#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
/*first and last is It's left closed right open interval
* - return the first subscript of the num that no small than value
*/
template <typename T>
int lower_bound(vector<T> array, int first, int last, int value){
	int mid;
	while (first < last){
		mid = first + (last - first) / 2;
		if (array[mid] < value){
			first = mid + 1;
		}
		else{
			last = mid;
		}
	}
	return first;
}
int main(){
	srand(time(NULL));
	vector<int> a;
	for (int i = 1; i <= 10; i++){
		a.push_back(rand());
	}
	sort(a.begin(), a.end());
	for (int i = 1; i <= 10; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	int t = lower_bound(a, 0, 10, 15000);
	cout << t << endl;
	cout << a[t] << endl;
}