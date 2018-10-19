  
#include<iostream>
#include<string>
using namespace std;

int TransStringToArray(string a ,int *orig){

	int length=0,flag=0; 
	
	
		int sum = 0;
		while(length++<a.size()){
			
			if(a[length-1]!=','){
				sum*=10;
				int temp = a[length-1]-'0';
				sum+=temp;
			}
			else{
				orig[flag++] = sum;
				sum = 0;
			}
		}
		
	orig[flag++] = sum;
	return flag;
}

void Plus(string m,string n){
	int m_numLength ,n_numLength;
	int carry= 0,i=0,m_num[100],n_num[100];
	const int primeNumber[25] ={2,3,5,7,11,13,17,19,23,29,
								31,37,41,43,47,53,59,61,67,71,
								73,79,83,89,97};
	
	if(m.size()<n.size()){
		string temp = m;
		m = n;
		n = temp;
	}
	
	m_numLength = TransStringToArray(m,m_num);
	n_numLength = TransStringToArray(n,n_num);
	int t = m_numLength;
	
	while(m_numLength>0){ 
		int a,b,sum;
		a = m_num[m_numLength-1];
		
		if(n_numLength>0){
			b = n_num[n_numLength-1];
		} 
		else{
			b = 0; 
		}
		
		sum = a+b+carry;
		
		if(sum>=primeNumber[i]){
			m_num[m_numLength-1] = sum%primeNumber[i];
			carry = 1;
		} 
		else{
			m_num[m_numLength-1] = sum;
			carry = 0;
		}
		
		m_numLength--;
		n_numLength--;
		i++;
	} 
	
	
	if(carry ==1){
		cout<<"1,";
	}
	
	m_numLength = t ;
	

	int i = 0;
	while (m_num[i] == 0) i++;
	for(;i<m_numLength-1;++i){
		cout<<m_num[i]<<',';
	}
	cout<<m_num[m_numLength-1]<<endl;

}


int main(){
	
//	freopen("input.txt","r",stdin);
	string a,b; 
	while(1){
		cin>>a>>b;		
		if(a=="0"&&b=="0"){
			break;
		}
		else{
			Plus(a,b);
		}
	
	}
	return 0;
}

