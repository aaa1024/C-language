#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

/*
	1. 先自底向上建一个最大堆。
	2. 将第n个元素和堆顶元素（第1个元素）交换。
	   数组尾部元素已经是最大了，故不需要参加后续的运算了。
	3. 接着把第1到第n - 1个元素调成堆
	4. 然后再将堆顶元素和第(n - 1)个元素交换。
	5. 继续对(n - 2)个元素进行调堆，即返回第3步
*/

// 这个自顶向下调堆，已经保证了两个左子树和右子树是一个堆了
void adoptHeap(int *a, int i, int n){

	// 把以i为根节点的完全二叉树调成最大堆
	// 左儿子下标
	int temp = a[i];
	int j = i * 2;
	if (j > n){
		return;
	}
	if (j + 1 <= n){
		if (a[j] < a[j + 1]){
			j++;
		}
	}

	while (temp < a[j]){
		a[i] = a[j];
		i = j;
		if (j * 2 > n){
			break;
		}
		j = i * 2;
		if (j + 1 <= n){
			if (a[j] < a[j + 1]){
				j++;
			}
		}
	}
	a[i] = temp;
}
int main(){
	int n;
	int a[1000];
	int b[1000];
	while (cin >> n){
		srand(time(NULL));
		for (int i = 1; i <= n; i++){
			a[i] = rand() % 1000;
			cout << a[i];
			b[i] = a[i];
			printf("%c", i == n ? '\n' : ',');
		}
		sort(b + 1, b + n + 1);
		
		for (int i = n / 2; i >= 1; i--){
			adoptHeap(a, i, n);
			
			for (int i = 1; i <= n; i++){
				cout << a[i] << ", ";
			}
			cout << endl;
			
		}
		
		for (int i = 0; i < n - 1; i++){
			int t = a[n - i];
			a[n - i] = a[1];
			a[1] = t;
			adoptHeap(a, 1, n - i - 1);
		}

		for (int i = 1; i <= n; i++){
			cout << a[i] << ",";
		}
		cout << endl;
		int sum = 0;
		for (int i = 1; i <= n; i++){
			sum += (a[i] - b[i]) * (a[i] - b[i]);
		}
		cout << sum << endl;
	}
}