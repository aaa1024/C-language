#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
template <typename Type, int size>
Type min(Type (&r_array)[size]){
	Type min_val = r_array[0];
	for (int i = 1; i < size; ++i){
		cout << "in min:" << r_array[i] << endl;
		if (r_array[i] < min_val)
			min_val = r_array[i];
	}
	return min_val;
}
int main(){
	int a[10];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++){
		a[i] = rand()%100;
		cout <<"a[i] = " << a[i] << endl;
	}
	printf("min = %d\n", min(a));
	return 0;
}