#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Queue{
	public:
		int *arr;
		int front,rear,size;
		Queue(int n){
			arr=new int[n];
			front=0,rear=0;
			size=n;
		}
		void push(int x){
			if(rear<size){
				arr[rear]=x;
				rear++;
				return;
			}
			cout<<"Queue is full of sorrow bitch fuck off get your weird creepy funcking unworthy asss off from here"<<endl;
		}
		void pop(){
			if(front==rear){
				cout<<"bhai teri zindagi ki tarah queue bhi khali hai so please mind asking again here and to that bitch too"<<endl;
				return;
			}
			front++;
		}
		int getsize(){
			return rear-front;
		}
		int get_front(){
			cout<<" ma dar chodh "<<arr[front]<<endl;
			return arr[front];
		}
		bool isEmpty(){
			return (front==rear);
		}
};

class circularQ{
	public:
		int front,rear,size;
		int *arr;
		circularQ(int n){
			front=-1;
			rear=-1;
			size=n;
			arr=new int(n);
		}
		void push(int x){
			//full
			if(front==0 &&rear==size-1  || front-1==rear){
				cout<<"Queue is full"<<endl;
				return;
			}
			//first(single) element
			else if(front==-1){
				front=rear=0;
				arr[rear]=x;
			}
			//establish circular nature
			else if(rear==size-1){
				rear=0;
				arr[rear]=x;
			} 
			//normal flow
			else{
				arr[++rear]=x;
			}
		}
		void push_mod(int x){
			if(front==0 &&rear==size-1  || front-1==rear){
				return;
			}
			else if(front==-1){
				arr[++front]=x;
				rear=front;
			}
			else{
				rear=(rear+1)%size;
				arr[rear]=x;
			}
		}
		void pop(){
			if(front==-1){
				cout<<"Queue is empty"<<endl;
				return;
			}
			else if(front==rear){
				arr[front]=-1;
				front=-1;
				rear=-1;
			}
			else if(front==size-1){
				front=0;
			}
			else{
				front++; 
			}
		}
		void pop_mod(){
			if(front==-1){
				cout<<"empty "<<endl;
				return;
			}
			else if(front==rear){
				arr[front]=-1;
				front=rear=-1;
			}
			else{
				arr[front]=-1;
				front=(front+1)%size;
			}
		}
};

class Ddq{
	publc:
		int r,f,n;
		int *a;
		Ddq(int size){
			n=size;
			f=r=-1;
			a=new int[size];
		}
		//push
		void push_r(int x){
			if(f==0 && r==n-1  ||(f-1==r)){
				cout<<"it is full"<<endl;
			}
			else if(f==r){
				f=r=0;
				a[f]=x;
			}
			else if(r==n-1){
				r=0;
				a[r]=x;
			}
			else{
				a[++r]=x;
			}
		}
		void push_f(int x){
			if(f==0 &&r==n-1  ||(r==f+1)){
				cout<<"it is full"<<endl;
			}
			else if(f==-1){
				f=r=0;
				a[f]=x;
			}
			else if(f==0){
				f=n-1;
				a[f]=x;
			}
			else{
				a[--f]=x;
			}
		}
		//pop
		void pop_r(){
			if(f==-1){
				cout<<"it is empty"<<endl;
			}
			else if(f==r){
				f=r=-1;
			}
			else if(r==0){
				r=n-1;
			}
			else{
				r--;
			}
		}
		void pop_f(){
			if(f==-1){
				cout<<"it is empty"<<endl;
			}
			else if(f==r){
				f=r=-1;
			}
			else if(f==n-1){
				f=0;
			}
			else{
				f++;
			}
		}
}
int main(){
//	Queue q(5);
//	cout<<q.isEmpty()<<endl;
////	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	//q.push(5);
//	cout<<q.get_front()<<" "<<q.getsize()<<" "<<q.isEmpty()<<endl;
//	cout<<q.arr[0];
//	
//	circularQ roman(4);
//	cout<<"empty"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;
//	roman.push_mod(1);
//	cout<<"single"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;
//	roman.push_mod(2);
//	roman.push_mod(3);
//	cout<<"before pop"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;
//	roman.pop_mod();
//	cout<<"pop after 3 insertions"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;
//	roman.pop_mod();
//	roman.push_mod(4);
//	cout<<"pop after 2 insertions"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;
//	roman.pop_mod();
//	cout<<"pop after 1 insertions"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;
//	roman.pop_mod();
//	cout<<"pop after 1 insertions"<<endl;
//	cout<<roman.front<<endl;
//	cout<<roman.rear<<endl;

    
    return 0;
}
