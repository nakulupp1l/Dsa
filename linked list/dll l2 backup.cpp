#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class DLL{
	public:
		int data;
		DLL* prev;
		DLL* next;
		DLL(){
			data=0;
			prev=next=NULL;
		}
		DLL(int x){
			data=x;
			prev=next=NULL;
		}
};
void print(DLL* &head){
	DLL* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	delete(temp);
}
void rprint(DLL* &tail){
	DLL* temp=tail;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	cout<<endl;
	delete(temp);
}
int getlen(DLL* head){
	int count =0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}
void insertAtHead(DLL* & head,DLL*& tail,int x){
	DLL* node=new DLL(x);
	if(head==NULL){
		head=node;
		tail=node;
		return;
	}
	node->next=head;
	head->prev=node;
	head=node;
}
void insertAtTail(DLL* & head,DLL*& tail,int x){
	DLL* node=new DLL(x);
	if(head==NULL){
		head=node;
		tail=node;
		return;
	}
	tail->next=node;
	node->prev=tail;
	tail=node;
}
void insertAtPos(DLL* &head,DLL* &tail,int x,int pos){
	DLL* node=new DLL(x);
	if(head==NULL){
		head=node;
		tail=node;
		return;
	}
	if(pos==1){
		insertAtHead(head,tail,x);
		return;
	}
	int len=getlen(head);
	if(pos>len){
		insertAtTail(head,tail,x);
		return;
	}
	int i=1;
	DLL* temp=head;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	temp->next->prev=node;
	node->next=temp->next;
	node->prev=temp;
	temp->next=node;
}
void deletion(DLL* &head,DLL* &tail,int pos){
	//if empty
	if(head==NULL){
		cout<<"empty list"<<endl;
		return;
	}
	//if single node
	if(head->next==NULL){
		DLL* node=head;
		head=NULL;
		tail=NULL;
		delete node;
		return;
	}
	//to delete first node
	if(pos==1){
		DLL* temp=head;
		head=head->next;
		head->prev=NULL;
		temp->next=NULL; 
		delete temp;
		return;
	}
	//to delete last node
	int x=getlen(head);
	if(pos==x){
		DLL*temp=tail;
		tail=tail->prev;
		tail->next=NULL;
		temp->prev=NULL;
		delete temp;
		return;
	}
	//if out of range
	if(pos>x){
		cout<<"out of range"<<endl;
		return;
	}
	//from in between
	int i=1;
	DLL*temp=head;
	while(i<pos){
		temp=temp->next;
		i++;
	} 
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	temp->next=NULL;
	temp->prev=NULL;
	delete temp;
}
int main(){
//	DLL* a=new DLL(1);
//	DLL* b=new DLL(2);
//	DLL* c=new DLL(3);
//	a->next=b;
//	a->prev=NULL;
//	b->next=c;
//	b->prev=a;
//	c->next=NULL;
//	c->prev=b;
//	insertAtHead(a,0);
//	print(a);
//	rprint(c);
//	cout<<getlen(a); 

    DLL* h=new DLL();
    DLL* t=new DLL();
    h=NULL;
    insertAtTail(h,t,0);
    insertAtTail(h,t,1);
    insertAtTail(h,t,2);
    insertAtTail(h,t,3);
    print(h);
    insertAtPos(h,t,10,4);
    print(h);
    deletion(h,t,4);
    print(h);
    //do reverse a linked list
    return 0;
}
