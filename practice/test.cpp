#include<iostream>
using namespace std;
int main(){
	freopen("in.txt", "r", stdin);
	int current=0,newInput=0;
	if(cin>>current) {
		
			int cal = 1;
			while(cin>>newInput){
				
				if(current==newInput){
					++cal;
				}
				else{
					cout<<current<<" occurs "<<cal<<" times"<<endl;
					current = newInput;
					cal =1;
				}
				
		}
	cout<<current<<" occurs "<<cal<<" times"<<endl;
	}
	
	return 0;
} 
