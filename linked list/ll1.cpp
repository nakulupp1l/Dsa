#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(){
			data=0;
			next=NULL;
		}
		node(int x){
			data=x;
			next=NULL;
		}
};
void print(node* &x){
	node* y=x;
	while(y!=NULL){
		cout<<y->data<<" ";
		y=y->next;
	}
	cout<<endl;
}
//insert at head
void insert_head(node* &head,int x){
	node* newNode=new node(x);
	newNode->next=head;
	head=newNode;
}
//insert at tail
void insert_tail(node* head,int x){
	node* newNode=new node(x);
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=newNode;
}

//inserting
void inserth(node* &h,node* &t,int x){
	node* n=new node(x);
	if(h==NULL){
		h=n;
		t=n;
		return;
	}  
	n->next=h;
	h=n;
}
void insertt(node* &h,node* &t,int x){
	node* n=new node(x);
	if(h==NULL){
		h=n;
		t=n;
		return;
	}
	t->next=n;
	t=n;
}
void insertp(node* &h,node* &t,int x,int p){
	node* temp=h;
	node* n=new node(x);
	if(p==0){
	inserth(h,t,x);
	return;}
	while(temp!=NULL&&p!=1){
		--p;
		temp=temp->next;
	}
	if(p==1){
		n->next=temp->next;
	    temp->next=n;
	    if(n->next==NULL)
	    t=n;
		}
	else{
		insertt(h,t,x);
	}
}
//deletion 
void del(node* &h,node* &t,int p){
	if(p==0){
		node* curr=h;
		h=h->next;
		delete(curr);
		return;
	}
	node* temp=h;
	while(p!=1 && temp!=NULL){
		p--;
		temp=temp->next;
	}
	if(temp==NULL||temp->next==NULL){
		return;
	}
	if(p==1){
		node* curr=temp->next;
		temp->next=temp->next->next;
		if(temp->next==NULL)
		t=temp;
		delete(curr);
	}
}
int main(){
	//initialize
	node* head=new node(0);
	node* a=new node(1);
	node* b=new node(2);
	node* c=new node(3);
	node* d=new node(4);
	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	//print
	//print(head); 
	//insert
	//at head
	insert_head(head,-1);
	//print(head);
	//at tail
	insert_tail(head,5);
	//print(head);
	
	//new things
	node* h=NULL;
	node* t=NULL;
	insertt(h,t,90);
	insertt(h,t,60);
	inserth(h,t,50);
	inserth(h,t,20);
	inserth(h,t,77);
	//at p index;
   //	insertp(h,t,0,4); 
	print(h);
	cout<<h->data<<" "<<endl;
	del(h,t,0);
	print(h);
	cout<<h->data;
    return 0;
}
