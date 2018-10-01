#include <cstdio>
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
stack<int> num;
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
int calculate(char c, int a, int b){
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
void solve(){
	opera.pop();
	while (!num.empty() && !opera.empty()){
		int a = num.top();
		num.pop();
		if (opera.top() == '#'){
			cout << a << endl;
			opera.pop();
			break;
		}
		int b = num.top();
		num.pop();
		int c = calculate(opera.top(), b, a);
		opera.pop();
		num.push(c);
	}
}
void read(string input){
	opera.push('#');
	input = input + '#';
	int temp = 0;
	//cout << input << endl;
	for(int i = 0; i < (int)input.size(); i++){
	//	printf("input[%d] = %c op:%c ", i, input[i], opera.top());
	//	if(!num.empty()) cout << num.top() << endl;
	//	else cout << "null" << endl;
		//if (input[i] == '#') break;
		if (input[i] >= '0' && input[i] <= '9'){
			temp = 0;
			while(input[i] >= '0' && input[i] <= '9'){
				temp = temp * 10  + (input[i] - '0');
				i++;
			}
			num.push(temp);			i--;
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
						int a = num.top();
						num.pop();
						int b = num.top();
						num.pop();
						int c = calculate(opera.top(), b, a);
						num.push(c);
						opera.pop();
					}
					opera.pop();
				}
				else{
					int a = num.top();
					num.pop();
					if (num.empty()){
						cout << a << endl;
						break;
					}
					int b = num.top();
					num.pop();
					int c = calculate(opera.top(), b, a);
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
int main(){
//	freopen("in.txt", "r", stdin);
	//int ans = 0;
	string input;
	cin >> input;
	read(input);
	while (!num.empty()){
		cout << num.top() << endl;
		num.pop();
	}
	/*
	while (!opera.empty()){
		cout << opera.top() << endl;
		opera.pop();
	}
	*/
	return 0;
}