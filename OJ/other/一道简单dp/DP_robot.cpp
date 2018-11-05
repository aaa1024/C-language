/*
A robot is located at the top-left corner of a m*n grid.
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid. 
There is a positive integer in each small grid which means the score that the robot get when it passes this grid.
Now you need to calculate the top k total score when the robot reach the destination.

note: The top k total score may contain same total score got from different paths.

Example 1:

Input:
3 3
2
3 2 5
3 2 2
4 2 1

Output:
13 13

Example 2:

Input:
4 4
3
7 1 5 8
4 6 2 1
4 2 1 3
5 7 3 2

Output:
32 31 29

TEST 1: 1 <= n, m <= 4, k = 1
TEST 2-3: 1<= n, m, k<=4
TEST 4: 1<= n, m <= 100, k = 1
TEST 5-10: 1<=n, m, k<=100

For all, cost <= 100

*/
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define maxn 107
const int inf = 0x3f3f3f3f;
int n, m, k;
vector<int> findTopK(vector<int> a, vector<int> b, int t){
	vector<int> temp;
	vector<int> ans;
	for (int i = 0; i < (int)a.size(); i++){
		temp.push_back(a[i] + t);
	}
	for (int i = 0; i < (int)b.size(); i++){
		temp.push_back(b[i] + t);
	};
	sort(temp.begin(), temp.end());
	if ((int)temp.size() <= k){
		return temp;
	}
	else{
		for (int i = temp.size() - k; i < (int)temp.size(); i++){
			ans.push_back(temp[i]);
		}
		return ans;
	}
}
int main(int argc, char * argv[]) 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	while (cin >> n >> m >> k){
		int a[maxn][maxn];
		vector<int> v[maxn][maxn];
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		int temp = a[1][1];
		v[1][1].push_back(a[1][1]);
		for (int i = 2; i <= n; i++){
			temp += a[i][1];
			v[i][1].push_back(temp);
		}
		temp = a[1][1];
		for (int i = 2; i <= m; i++){
			temp += a[1][i];
			v[1][i].push_back(temp);
		}

		for (int i = 2; i <= n; i++){
			for (int j = 2; j <= m; j++){
				v[i][j] = findTopK(v[i - 1][j], v[i][j - 1], a[i][j]);
			}
		}
		/*
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				for (int k = 0; k < (int)v[i][j].size(); k++){
					cout << v[i][j][k] << " ";
				}
				cout << ",";
			}
			cout << endl;
		}
		*/
		for (int i = 0; i < k; i++){
			int t = (int)v[n][m].size() - i - 1;
			cout << v[n][m][t] << " ";
		}
		cout << endl;
	}
    return 0;
}