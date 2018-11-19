#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
#define maxn 10000007
const int inf = 0x3f3f3f3f;
struct node{
	char c;
	node *next;
	node *last;
	node(){
		next = NULL;
		last = NULL;
	}
	node(char _c){
		c = _c;
		next = NULL;
		last = NULL;
	}
};
node *dizhi[30];
struct linkList{
	node *head;
	node *tail;
	node *guangbiao;
	linkList(){
		head = NULL;
		tail = head;
		guangbiao = head;
	}
	
	~linkList(){
		node *temp = head;
		node *cur = head;
		while (temp != NULL){
			cur = temp;
			temp = temp->next;
			delete cur;
		}
	}

	void append(char c){
		if (head == NULL){
			head = new node(c);
			tail = head;
			guangbiao = head;
			dizhi[c - 'a'] = head;
		}
		else{
			tail->next = new node(c);
			dizhi[c - 'a'] = tail->next;
			tail->next->last = tail;
			tail = tail ->next;
		}
	}
	void insert(char c){
		node *temp = new node(c);
		temp->next = guangbiao->next;
		guangbiao->next = temp;
		guangbiao = guangbiao->next;
		dizhi[c - 'a'] = temp;
	}
	void print(){
		node *cur = head;
		while (cur != NULL){
			cout << cur->c;
			cur = cur->next;
		}
	}
	void reprint(){
		node *cur = tail;
		while (cur != NULL){
			cout << cur->c;
			cur = cur->last;
		}
	}
	void f(char c){
		if (dizhi[c - 'a'])
			guangbiao = dizhi[c - 'a'];
	}
	void x(){
		if (guangbiao->last != NULL){
			guangbiao->last = guangbiao->next;
		}
		node *temp = guangbiao;
		guangbiao = guangbiao->next;
		delete temp;
	}
	void h(){
		if (guangbiao->last != NULL){
			guangbiao = guangbiao->last;
		}
	}
	void l(){
		if (guangbiao->next != NULL){
			guangbiao = guangbiao->next;
		}
	}
};
int main(int argc, char * argv[]) 
{
    freopen("D.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
	string s, t;
	while (cin >> s){
		cin >> t;
		linkList a;
		for (int i = 0; i < (int)s.size(); i++){
			a.append(s[i]);
		}
		a.print();
		a.reprint();
		for (int i = 0; i < (int)t.size(); i++){
			if (t[i] == 'i'){
				i++;
				while (t[i] != 'e' && i < (int)t.size()){
				//	printf("inwhile\n");
					a.insert(t[i]);
					i++;
				}
			}
			else if (t[i] == 'f'){
				a.f(t[i + 1]);
				i++;
			}
			else if (t[i] == 'x'){
				a.x();
			}
			else if (t[i] == 'h'){
				a.h();
			}
			else if (t[i] == 'l'){
				a.l();
			}
		}
	}
    return 0;
}
