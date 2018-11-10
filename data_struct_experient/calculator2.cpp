#include <cstdio>
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
stack<double> num;
stack<char> opera;
//表示栈内算术运算符的优先级
int getPriorityInStack(char c){
//	int ans;
	if (c == '#'){
		return 0;
	}
	else if (c == '('){
		return 1;
	}
	else if (c == '*' || c == '/'){
		return 5;
	}
	else if (c == '+' || c == '-'){
		return 3;
	}
	else if (c == ')'){
		return 2;
	}
	return -1;
}
//栈外运算符的优先级
int getPriorityOutStack(char c){
	if (c == '#'){
		return 0;
	}
	else if (c == '('){
		return 6;
	}
	else if (c == '*' || c == '/'){
		return 4;
	}
	else if(c == '+' || c == '-'){
		return 2;
	}
	else if (c == ')'){
		return 1;
	}
	return - 1;
}
double calculate(char c, double a, double b){
	if (c == '+'){
		return a + b;
	}
	else if (c == '-'){
		return a - b;
	}
	else if (c == '*'){
		return a * b;
	}
	else if (c == '/'){
		return a / b;
	}
	return 0;
}
string seperate(string a){
	if(!a.empty())
   	{
		for (int i = 0; i < (int)a.size(); i++){
			while ((a[i] >'9' || a[i] < '0' || a[i] == ' ') 
					&& i < (int)a.size() 
					&& (a[i] != '+' && a[i] != '-' 
					&& a[i] != '*' && a[i] != '/')
					&& (a[i] != '(') && (a[i] != ')')
					&& (a[i] != '.')){
				a.erase(i, 1);
			}
		}
    }
    return a;
}
void read(string input){
	opera.push('#');
	input = input + '#';
	double temp = 0;
//	cout << input << endl;
	for(int i = 0; i < (int)input.size(); i++){
	//	printf("input[%d] = %c op:%c ", i, input[i], opera.top());
	//	if(!num.empty()) cout << num.top() << endl;
	//	else cout << "null" << endl;
		//if (input[i] == '#') break;
		if ((input[i] >= '0' && input[i] <= '9') || input[i] == '.' || (input[i] == '-' && (i == 0 || input[i - 1] == '('))){
			temp = 0;
			int flag = 1;
			if (input[i] == '-' && (i == 0 || input[i - 1] == '(')){
				flag = -1;
				i++;
			}
			while((input[i] >= '0' && input[i] <= '9')){
				if (input[i] == '-') temp = -temp;
				temp = temp * 10  + (input[i] - '0');
				i++;
			}
			if (input[i] == '.'){
				i++;
				double temp2 = 0.1;
				while((input[i] >= '0' && input[i] <= '9')){
					temp += (input[i] - '0') * temp2;
					temp2 /= 10.0;
					i++;
				}
			}
			num.push(temp*flag);			
			i--;
		}
		else{
		//	printf("temp3:%d\n", temp);;
			if (getPriorityOutStack(input[i]) > getPriorityInStack(opera.top())){
				opera.push(input[i]);
			}
			else{
				if(input[i] == ')'){
					while (opera.top() != '('){
						if (opera.top() == '#'){
							opera.pop();
							if (opera.empty()){
								break;
							}
						}
						double a = num.top();
						num.pop();
						double b = num.top();
						num.pop();
						double c = calculate(opera.top(), b, a);
						num.push(c);
						opera.pop();
					}
					opera.pop();
				}
				else{
					double a = num.top();
					num.pop();
					if (num.empty()){
						cout << a << endl;
						break;
					}
					double b = num.top();
					num.pop();
					double c = calculate(opera.top(), b, a);
					opera.pop();
					num.push(c);
					//opera.push(input[i]);
					i--;
				}
			}
		//	printf("%dopera:%c\n", i, input[i]);
		}
		// if (input[i] == '#') break;
		//cout << "temp" + temp << endl;
	}
}
bool judge(string s){
//	cout << "judge" << endl;
	int cnt = 0;
	int cntNum = 0, cntOpera = 0;
	for (int i = 0; i < (int)s.size(); i++){
		if (s[i] == '('){
			cnt++;
		}
		if (s[i] == ')'){
			if (s[i + 1] == '('){
				return false;
			}
			cnt--;
			if (cnt < 0){
				return false;
			}
		}
	}
	for (int i = 0; i < (int)s.size();){
	//	cout << i << endl;
		if (s[i] >= '0' && s[i] <= '9'){
			cntNum++;
			i++;
			while (((s[i] >= '0' && s[i] <= '9')  || s[i] == '.') && i < (int)s.size()){
				i++;
			}
		}
		else if (s[i] == '+' || s[i] == '-' 
			|| s[i] == '*' || s[i] == '/'){
			cntOpera++;
			i++;
		}
		else{
			i++;
		}
	}
//
//	printf("num %d, opera%d\n", cntNum, cntOpera);
	if (cnt || cntNum != cntOpera + 1){
		return false;
	}

	else{
		return true;
	}
}
int main(){
	
	//freopen("in.txt", "r", stdin);
	//int ans = 0;
	string input2, input;
	while(getline(cin, input)){
	    string s = seperate(input);
	    if (!judge(s)){
	    	cout << "input error!" << endl;
	    	continue;
	    }
	//	cout << s << endl;
		read(s);
	}
	/*
	while (!opera.empty()){
		cout << opera.top() << endl;
		opera.pop();
	}
	*/
	return 0;
}