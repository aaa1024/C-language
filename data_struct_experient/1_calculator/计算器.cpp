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
//返回单次运算的结果
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
//把字符串中除了操作符和数字以外的字符
string seperate(string a){
    if(!a.empty())
    {
        for (int i = 0; i < (int)a.size(); i++){
            //只要不是操作符或者数字都剔除
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
    //先把一个“#”补到字符串末尾，一个压入栈
    opera.push('#');
    input = input + '#';
    double temp = 0;
//	cout << input << endl;
    //遍历字符串
    for(int i = 0; i < (int)input.size(); i++){
        //	printf("input[%d] = %c op:%c ", i, input[i], opera.top());
        //	if(!num.empty()) cout << num.top() << endl;
        //	else cout << "null" << endl;
        //if (input[i] == '#') break;
        //如果是数字则按数字处理，其中
        if ((input[i] >= '0' && input[i] <= '9') //数字
            || input[i] == '.'//小数点
            || (input[i] == '-' && (i == 0 || input[i - 1] == '(')) //表示左括号接着的负号
            || (input[i] == '+' && (i == 0 || input[i - 1] == '('))){ //表示左括号接着的正号
            
            temp = 0; // 临时存放的数字
            //先读符号位
            int flag = 1;
            if (input[i] == '-' && (i == 0 || input[i - 1] == '(')){
                flag = -1;
                i++;
            }
            //逐步读取小数点前面的，每次temp*10进位
            while((input[i] >= '0' && input[i] <= '9')){
                if (input[i] == '-') temp = -temp;
                temp = temp * 10  + (input[i] - '0');
                i++;
            }
            //再读小数点后面的，用一个每次减少10的temp2记录当前数的进位
            if (input[i] == '.'){
                i++;
                double temp2 = 0.1;
                while((input[i] >= '0' && input[i] <= '9')){
                    temp += (input[i] - '0') * temp2;
                    temp2 /= 10.0;
                    i++;
                }
            }
            //连带符号一起入栈
            num.push(temp*flag);
            i--;
        }
        else{
            //按照操作符的优先级进行操作
            //	printf("temp3:%d\n", temp);;
            //如果栈外比栈内大，则把当前的推进去。
            if (getPriorityOutStack(input[i]) > getPriorityInStack(opera.top())){
                opera.push(input[i]);
            }
            else{
                //如果遇到小括号，则先括号里的东西算完
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
                //如果不是，则取出两个进行运算，运算结果入栈。
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
//判断输入的运算符是否合法
bool judge(string s){
//	cout << "judge" << endl;
    int cnt = 0;
    int cntNum = 0, cntOpera = 0;
    //判断左右括号是否配对
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
        else if (s[i] == '*' || s[i] == '/'){
            cntOpera++;
            i++;
        }
        else if (s[i] == '+' || s[i] == '-'){
            if (i == 0 || s[i - 1] == '('){

            }
            else {
                cntOpera++;
            }
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
    cout << "please input a string" << endl;
    while(getline(cin, input)){
        string s = seperate(input);
        if (!judge(s)){
            cout << "input error!" << endl;
            continue;
        }
        //	cout << s << endl;
        cout << "the result is:" << endl;
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