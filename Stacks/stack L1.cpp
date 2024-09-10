#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Stack{
	private:
		int* arr; //to access and store element
		int top; //index of top element
		int size;//represent total size;
	public:	
		Stack(int size){
			top=-1;
			this->size=size;
			arr=new int[size];
		}
		
		void push(int x){
			if(size==top+1){
				cout<<"stack overflow"<<endl;
				return;
			}
			top+=1;
			arr[top]=x;
		}
		void pop(){
			if(top==-1){
				cout<<"stack Underflow"<<endl;
				return;
			}
			top=top-1;
		}
		int getTop(){
			if(top==-1){
				cout<<"empty stack bitches"<<endl;
				return -1;
			}
			return arr[top];
		}
		int getSize(){
			return top+1;
		}
		bool isEmpty(){
			if(top==-1)
			return 1;
			return 0;
		}
};

//implementing 2 stack in one array
class Stack2{
	private:
		int* arr; //to access and store element
		int top1; //index of top element
		int top2;
		int size;//represent total size;
	public:	
		Stack2(int size){
			top1=-1;
			top2=size;
			this->size=size;
			arr=new int[size];
			for(int i=0;i<size;++i){
				arr[i]=0;
			}
		}
		
		void push1(int x){
			if(top2-top1==1){
				cout<<"overflow"<<endl;
				return;
			}
			top1++;
			arr[top1]=x;
		}
		void pop1(){
			if(top1==-1){
				cout<<"underflow"<<endl;
				return;
			}
			top1--;
		}
		void push2(int x){
			if(top2-top1==1){
				cout<<"overflow"<<endl;
				return;
			}
			top2--;
			arr[top2]=x;
		}
		void pop2(){
			if(top2==size){
				cout<<"underflow"<<endl;
				return;
			}
			top2++;
		}
		//made only to show working
		void print(){
			cout<<"top1 :"<<top1<<endl;
			cout<<"top2 :"<<top2<<endl;
			for(int i=0;i<size;++i){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			cout<<endl;
		}
		
};

int main(){
	Stack s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	//overflow
	s.push(69);
	while(!s.isEmpty()){
		cout<<s.getTop()<<" ";
		s.pop();
	}
	cout<<endl;
	//underflow
	s.pop();
	
	Stack2 s2(10);
	s2.push1(1);
	s2.print();
	s2.push1(2);
	s2.print();
	s2.push1(3);
	s2.print();
	
	s2.push2(4);
	s2.print();
	s2.push2(5);
	s2.print();
	s2.push2(6);
	s2.print();
	s2.push2(7);
	s2.print();
	s2.push2(8);
	s2.print();
	
	//reverse string using stack
	stack<char> x;
	string st="I saw Bitiches in Bikini in beaches";
	for(auto i:st){
		x.push(i);
	}
	int i=0;
	while(!x.empty()){
		cout<<x.top();
		st[i++]=x.top();
		x.pop();
	}
	cout<<endl<<st;
    return 0;
}
