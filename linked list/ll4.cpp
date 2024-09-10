#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(){
			next=NULL;
		}
		node(int x){
			data=x;
			next=NULL;
		}
};
void unsorted_remove_duplicates(node*&head){
	unordered_map<int,int>mp;
	node*temp=head;
	node* pre;
	mp[temp->data]=1;
	while(temp->next!=NULL){
		pre=temp;
		if(mp[temp->next->data]==0){
			mp[temp->data]=1;
			temp=temp->next;
		}
		else{
			node* tandon_saab_ke_bete_ki_mkc=temp->next;
			temp->next=temp->next->next;
			tandon_saab_ke_bete_ki_mkc->next=NULL;
			delete(tandon_saab_ke_bete_ki_mkc);
		}
		
	}
}
void print(node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
//sort colors 
//1.by counting and writing
void color(node*& head){
	int z,o,t;
	z=o=t=0;
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==0)
		z++;
		else if(temp->data==1)
		o++;
		else
		t++;
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(z!=0){
		temp->data=0;
		z--;
		}
		else if(o!=0){
		temp->data=1;
		o--;
		}
		else
		temp->data=2;
		temp=temp->next;
	}
}
//2.pyaari approach
void color2(node* &head){
	node* zh=new node(-1);
	node* zt=zh;
	node* oh=new node(-1);
	node* ot=oh;
	node* th=new node(-1);
	node* tt=th;
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==0){
			node* x=temp;
			temp=temp->next;
			x->next=NULL;
			zt->next=x;
			zt=x;
		}
		else if(temp->data==1){
			node* x=temp;
			temp=temp->next;
			x->next=NULL;
			ot->next=x;
			ot=x;
		}
		else{
			node* x=temp;
			temp=temp->next;
			x->next=NULL;
			tt->next=x;
			tt=x;
		}
		
	}
	temp=oh;
	oh=oh->next;
	temp->next=NULL;
	delete(temp);
	temp=th;
	th=th->next;
	temp->next=NULL;
	delete(temp);
	
	if(oh!=NULL){
		zt->next=oh;
		if(th!=NULL)
		ot->next=th;
	}
	else{
		if(th!=NULL)
		zt->next=th;
	}
	
	temp=zh;
	zh=zh->next;
	temp->next=NULL;
	delete(temp);
	head=zh;
}
int main(){
	node* head=new node(1);
	node* a=new node(1);
	node* b=new node(0);
	node* c=new node(2);
	node* d=new node(2);
	node* e=new node(0);
	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	print(head);
	color2(head);
	print(head);
    return 0;
}
