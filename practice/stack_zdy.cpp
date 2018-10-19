/*
	数组实现 栈（继承） 
*/ 
//Stack(can't 调用MyArray(n)) 

#include<iostream>
#define Capacity 10 
//const int Capacity = 10;//就相当于普通定义 
using namespace std;

class MyArray{//Class也可以，默认权限private,struct 默认public 
protected://只让子类访问 
	int *data;//数组代表栈 
	int size;//栈内元素个数
public:
	MyArray(){
		
	}
	MyArray(int n){
		size = n;
		data = new int[n];//initStack 
	}
	
	void init(){
		cout<<"please input 5 numbers:"<<endl;
			for(int i=0;i<size;++i){
				cin>>data[i];	
		}
	}
	void initeArray(int n){
		data = new int[n];
		this->size=n;
	}
	int Getltem(int index){ 
	
		if(size>index&&index>=0){
			return data[index];
		}
		else{
			cout<<"下标输入不合法"<<endl;
		}
	 
	
	} 
	

	virtual void Append(int d){ 
		size+=1;
		//重新开辟出地方 temp 
		//int *temp = (int *)malloc(sizeof(size));
		int *temp = new int[size];
		temp[size-1]=d;
		for(int i=0;i<size-1;++i){
			temp[i] = data[i];
		}
		
		delete [] data;
	    data = temp;
	} 
	
	int Locateltem(int d){
		if(data ==NULL){
			return -1; 
		}
		int i=0;
		for( i=0;i<size;++i){
			if(data[i] == d){
				return i;
			}
		}
		
			return -1;
		
	}
	
//	virtual void InsertBefore(int d,int index){//使用virtual 希望派生类覆盖 
//		size+=1;
//		int *temp = new int[size];
//		for(int i=0;i<index;++i){
//			temp[i] = data[i];
//		}
//		temp[index]=d;
//		for(int i=index+1;i<size;++i){
//			temp[i]=data[i-1];
//		}
//		delete [] data;
//		data= temp;
//		
//	}
	
	virtual int DeleteIltem(int index){
		size-=1;
		int ans = data[index];
		for(int i=index;i<size;++i){
			data[i]=data[i+1];
		} 
		return ans;
	}
	
	int getSize(){
		return size;
	}
	
	void printAll() {
		if(data==NULL){
			cout<<"栈空，无法打印"<<endl; 
			return;
		}
		for(int i=0;i<size;++i){
			cout<<data[i]<<' ';
		}
		cout<<endl;
	}
	
	bool isEmpty(){
		return  size==0; 
	}
	
	void resize (){//重新开辟 
		int *temp = new int[2*Capacity];
		for(int i=0;i<size;++i){
			temp[i] = data[i];
		}
		data = temp;
	}
	
		
}; 


class Stack : public MyArray{
	public:
		Stack(int scale):MyArray(scale){//父类已经初始化好了栈
//		 this->initeArray(scale);
		}
		~Stack(){
			delete this->data;
			this->data = NULL;
			this->size=0;
		}
		/* 数组元素置空 ，不需要单独写一个 clear函数，直接覆盖即可 
		void clearStack(){
			
		}*/ 
	
		
		int getTop(){//返回栈顶元素 
			if(this->size==0){
				return -1;
			}
			return this->data[this->size-1];
		}
		
		void Append(int d){//stack push, 函数overload 
			if(this->data==NULL){
				cout<<"栈检查为空，默认创建一个大小为5的栈"<<endl; 
				this->initeArray(5);
				this->size = 1;
				this->data[this->size-1] = d;
				return;
			}
			if(this->size+1>sizeof(this->data)) {
				this->resize();
			}
			this->data[this->size++] = d;
		} 
		
		int DeleteIltem(){//stack pop 
			if(this->data==NULL){
				return -1;
			}
			int dele;
			dele = this->data[this->size-1] ;
			this->size--;	
			return dele;
		}
		
}; 


int main(){
	char ch; 
	Stack a(5);
	bool flag = 1;
	while(flag){
		cout<<"输入你要进行的操作:a(查)，b(增push)，c(查目标值)，d(get栈顶元素)，e(删)，f(size),g(print),h(quit),i(empty?),j(destroy stack)"<<endl; 
		cin>>ch;	
			switch(ch){
			case 'a':
				int ina;
				if(a.getSize()!=0) {
					cout<<"输入你要找的元素下标:";
					cin>>ina;
					cout<<"下标对应的值是"<<a.Getltem(ina)<<endl;
				}
				 else{
				 	cout<<"栈不存在!"<<endl; 
				 }
				
				break;
			case 'b':
				int inb;
				cout<<"输入你要push的元素:";
				cin>>inb;
				a.Append(inb);
				break;
			case 'c':
				int inc;
				cout<<"输入你比较的数:";
				cin>>inc;
				if(a.Locateltem(inc)<0){
					cout<<"不存在"<<endl; 
				}
				else{
					cout<<"该数的下标是"<<a.Locateltem(inc)<<endl;
				}
				break;
//			case 'd':
//				int dd,ind;
//				cout<<"什么元素在第几个元素前插";
//				cin>>dd>>ind; 
//				a.InsertBefore(dd,ind);
//				break;
			case 'd':
				if(a.getTop()==-1){
					cout<<"栈不存在"<<endl;
					break; 
				}
				cout<<"栈顶元素是"<<a.getTop()<<endl;
				break;
			case 'e':
				if(a.getSize()==0){
					cout<<"栈空，无法pop"<<endl;
					break;
				}
				cout<<"pop掉的元素是"<<a.DeleteIltem()<<endl; 
				break;
			case 'f':
				cout<<a.getSize()<<endl;;
				break;
			case 'g':
				a.printAll();
				break;
			case 'h':
				flag =0;
				break;
			case 'i':
				if(a.isEmpty()){//a doesn't has father function 
					cout<<"stack blank!"<<endl;
				}
				else{
					cout<<"stack isn't blank!"<<endl;
				}
				break;
			case 'j':
				a.DestroyStack();
				break;
			
		
			default:
				cout<<"输入无效，请重新输入"<<endl; 
				break;
		}
	}
	return 0;
} 


//继承和栈的结构体不可同时用 {int *base,int *top,int stacksize}