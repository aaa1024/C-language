#include<iostream>
using namespace std;
//只要记住尾巴。不用遍历，双向链表 findfrevious（） findtail()

class LinkList{
private:
	int len;
	struct Node{
		int data;
		Node * next = NULL;
	};
	
	Node *phead = NULL;
	Node *ptail = NULL;
public:
	LinkList (){
		phead = new Node;
		ptail = phead;
	}
	
	LinkList (int len){
		this->len = len;
	}
	


		
	void Create_List(int len){
//		head = new Node;//分配一个头结点 
//		Node *ptail = phead;//定义一个尾节点，并初始化等于头节点 
//	    ptail->next = NULL;//头（尾）节点的指针域空
		
		
		
		Node *pnew = phead;
		cout<<"请输入节点的数值"<<endl;
		for(int i=0;i<len;++i){
			int num;
			cin>> num; 
			pnew->data = num;//填充数据域
			pnew->next = new Node;//新指针域指空
			pnew = pnew->next;
		}
		
		pnew->next = NULL;
		ptail = pnew;
	}
	

	int & Getltem(int idx){ 
		Node* p = phead;
		 
		for(int i=0;i<idx;i++){
			p = p->next;
		}
		return p->data;
	} 
	
	void Append(int idx){ 
		Node *p = phead;  
		Node* pnew = new Node;
		pnew->data = idx;
		pnew->next = NULL;
		for(int i=0;i<len;++i){
			p = p->next;
		} 
		p->next = pnew;
	
	}
	
	int LocateItem(int num){
		Node* p = phead; 
		int i=0;
		for( i=0;i<len;++i){
			if(p->data == num){
				
				return i;
			}
			p = p->next;
		}
		
			return -1;
		
	}
	
	void InsertBefore(int idx,int num){
		Node* p = phead; 
		
	
		for(int i=0;i<idx-1;++i){
			p = p->next;
		}
		
		Node *newnode = new Node;
		newnode->next =NULL; 
		newnode->data = num;
		
		Node *ptemp = p->next;
		p->next = newnode; 
		newnode->next = ptemp;
		len++;
		delete ptemp;
}
	int DeleteIltem(int k){
		int datatemp;
		//Node* p = phead;   question
		Node* p= phead;
		
		
		for(int i =0;i<k-1;++i){
			p = p->next;
		}
		Node* ptemp = new Node;
		 ptemp = p->next;
		datatemp = ptemp->data;
		p->next = ptemp->next;
		delete ptemp;
		ptemp=NULL;//理由
		len--; 
		return datatemp; 
		
	}
	
	int size(){
		return len;
	}
	
	void printAll() {
		cout << this->len << endl;
		Node *p= phead;
		for(int j=0;j<len;++j){
			cout<<p->data<<' ';
			p = p->next;
		}
		
	}
};

	
		
	
	


int main(){
	char ch; 
	/*
		int geshu;
		cout<<"节点个数" <<endl;
		cin<<geshu;
	*/
	int geshu = 5;
	LinkList a; 

	a.Create_List(geshu);
	
	bool flag = 1;
	while(flag){
		cout<<"输入你要进行的操作:a(查)，b(增)，c(查目标值)，d(插)，e(删)，f(size),g(print),h(quit)"<<endl; 
		cin>>ch;	
			switch(ch){
			case 'a':
				int ina;
				cout<<"要找数下标"<<endl;
				cin>>ina;
			//	printf("%d\n", a.Getltem(ina));
				cout<<"下标对应的值是"<<a.Getltem(ina)<<endl;
				break;
			case 'b':
				int inb;
				cout<<"要增加的数字"<<endl;
				cin>> inb; 
				a.Append(inb);
				break;
			case 'c':
				int inc;
				cout<<"输入你比较的数:";
				cin>>inc;
				if(a.LocateItem(inc)<0){
					cout<<"不存在"<<endl; 
				}
				else{
					cout<<"该数的下标是"<<a.LocateItem(inc)<<endl;
				}
				break;
			case 'd':
				int idx,val;
				cout<<"输入在第几个节点前插入什么数";
				cin>>idx>>val;
				a.InsertBefore(idx,val);
				break;
			case 'e':
				int k;
				cout<<"要删除第几个节点:"<<endl;
				cin>> k;
				cout<<"该元素是"<<a.DeleteIltem(k)<<endl; 
				break;
			case 'f':
				cout<<geshu<<endl;;
				break;
			case 'g':
				a.printAll();
				break;
			case 'h':
				flag =0;
				break;
			default:
				cout<<"输入无效，请重新输入"<<endl; 
				break;
		}
	}
	
//	delete [] a.data;  //how to delete 链表 
	return 0;
} 



