#include <iostream>
#include <stack>
 
using namespace std;
 
char suf_exp[100];//储存后缀表达式
int z=0;//suf_exp的下标变量
 
bool cmp(char a,char b){//若操作符a和b的优先级
    if(a=='*'||a=='/'){//a的高
        if(b=='*'||b=='/')  return false;
        else
            return true;
    }
    else//b的高
        return false;
}
void get_suf_exp(string s){
    cout<<"It's suffix expression: ";
    stack<char> ope_stack;//操作符栈
    int len=s.length();
    for(int i=0;i<len;i++){//1)
        char t=s[i];
        if(t=='(')   ope_stack.push(s[i]);
        else if(t==')'){
            char ope=ope_stack.top();
            while(ope!='('){
                suf_exp[z++]=ope;
                cout<<ope<<" ";
                ope_stack.pop();
                ope=ope_stack.top();
            }
            ope_stack.pop();//pop '('
        }
        else if(t>='0'&&t<='9'){
            int temp = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                temp = temp * 10  + (s[i] - '0');
                i++;
            }
            i--;
            suf_exp[z++]=temp;
            cout<<temp<<" ";
        }
        else{
            if(ope_stack.empty())    ope_stack.push(t);
            else{
                char stp=ope_stack.top();
                if(stp=='('||cmp(t,stp))  ope_stack.push(t);// 1)<1>
                else{                                       // 1)<2> <3>
                    while(!cmp(t,stp)&&!ope_stack.empty()&&stp!='('){
                        ope_stack.pop();
                        cout<<stp<<" ";
                        suf_exp[z++]=stp;
                        if(!ope_stack.empty())
                            stp=ope_stack.top();
                    }
                    ope_stack.push(t);
                }
            }
        }
    }
    while(!ope_stack.empty()){//2)
        char t=ope_stack.top();
        cout<<t<<" ";
        suf_exp[z++]=t;
        ope_stack.pop();
    }
}
 
void calculate(string s){
    stack<float> val_stack;
    val_stack.push(1.0*(suf_exp[0]-'0'));//将字符转化为浮点型数
    for(int i=1;i<z;i++){
        char t=suf_exp[i];
        if(t>='0'&&t<='9')    val_stack.push((t-'0')*1.0);
        else{
            float x=val_stack.top(); val_stack.pop();
            float y=val_stack.top(); val_stack.pop();
            float tmp;
            if(t=='+')  tmp=x+y;
            else if(t=='-') tmp=y-x;
            else if(t=='*') tmp=x*y;
            else    tmp=y/x;
            val_stack.push(tmp);
//            cout<<endl<<tmp;
        }
    }
    cout<<endl<<s<<" = "<<val_stack.top()<<endl;
}
int main(){
    string in_exp;//输入中缀表达式
    cin>>in_exp;
    get_suf_exp(in_exp);
    calculate(in_exp);
    return 0;
}
