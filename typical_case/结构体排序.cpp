#include <algorithm>
#include <cstdio>
#include <iostream>
#include <ctime>
using namespace std;
struct A
{
	int a;
	int b;
	int c;
};
bool cmp(struct A a, struct A b){
	return a.a < b.a;
}
int main(){
	srand(time(NULL));
	A a[10];
	for (int i = 0; i < 10; i++){
		a[i].a = rand();
		a[i].b = i;
		a[i].c = i * i;
 	}
 	for (int i = 0; i < 10; i++){
 		printf("a[%d]:%d %d %d\n", i, a[i].a, a[i].b, a[i].c);
 	}
 	sort(a, a + 10, cmp);
 	cout << "after sorted" << endl;
  	for (int i = 0; i < 10; i++){
 		printf("a[%d]:%d %d %d\n", i, a[i].a, a[i].b, a[i].c);
 	}
 	return 0;
}