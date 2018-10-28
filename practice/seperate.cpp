#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string seperate(string a){
	if(!a.empty())
   	{
		for (int i = 0; i < (int)a.size(); i++){
			while ((a[i] >'9' || a[i] < '0' || a[i] == ' ') 
					&& i < (int)a.size() 
					&& (a[i] != '+' && a[i] != '-' && a[i] != '*' && a[i] != '/')){
				a.erase(i, 1);
			}
		}
    }
    return a;
}
int main(){
	string a;
	
	while(getline(cin, a)){
	/*	cout << a << endl;
	    if(!a.empty())
	    {
			for (int i = 0; i < (int)a.size(); i++){
				while ((a[i] >'9' || a[i] < '0' || a[i] == ' ') && i < (int)a.size()){
					a.erase(i, 1);
				}
			}
	    }
	    cout << a << endl;
	*/
		cout << seperate(a) << endl;
	}
	
}