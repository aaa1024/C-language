#include<iostream>
using namespace std;
  
   
 struct  Node{
 	int value;
 	Node *next;
 };
 
 //创建一个新节点放在链表的头部 ------头结点插入法（头结点不动，只在它后一位插入） 
 void createList(Node *&head,int data){//*&指针的引用修改过后，实际值就会被改变，不只是改个参数 
 	Node * p =new Node;
 	if(head==NULL){
	 	head = p;
	 } 
 	p->value = data;
 	p->next = head->next;
 	head->next = p;
	/*
	？ 
	执行完第一次之后：
	p->value = data
	p->next = head->next and head->next is NULL!
	head->next = p;
	也就是说head指向p,p指向空。
	同时p有data 
	第二次调用这个函数：
	head指向p，p指向上一个p 
	除了头结点的data没有赋值以外没有毛病 
	*/
	 
 }
 
void  printList(Node* head)
{
	Node * p = head->next;
	while (p!= NULL)
	{
		printf("%p ", p);
		cout << p->value<< " ";
		p = p->next;
	}
	cout << endl;
}

//递归方式实现反转
Node *reverse1(Node *head){
	if(head==NULL||head->next==NULL){
		return head;
	}//有了头结点，此步可省略 
// ？ 不能省，因为你递归每次传head->next，最后一次递归调用的参数肯定是NULL ，此为终止条件 
	Node *newhead = reverse1(head->next);//先反转后面的，从最后一个开始 
	head ->next ->next = head;//反转！ 
	head->next = NULL;//原来的断开
	return newhead;
} 
 //非递归方式,依次定义三个指针，时间复杂度O(n) 
 Node*reverse2(Node*head){
 	if(head==NULL||head->next==NULL){
		return head;
	}
	Node*pre = head;
	Node*cur = head->next;
	Node*temp = head->next->next;
	
	while(cur){
		printf("%p %p %p\n", pre, cur, temp);
		temp = cur->next;//记录当前节点cur下一个节点的位置
		cur->next = pre;//反转!
		pre = cur;//往后移
		cur = temp; 	 
	}
	head->next = NULL;//反转后的第一个结点（即反转前的第一个结点）置空 
	return pre; 
 } 
 
int main(){

	Node*head = new Node;//创建头结点而非头指针的好处：无需特殊处理（一般处理和空表非空处理） 
	head->next = NULL;

	for(int i=0;i<5;++i){
		createList(head,i);
	}
	
	printList(head);
	head = reverse2(head->next);
	printList(head);
	//system("pause");
	return 0;
} 
