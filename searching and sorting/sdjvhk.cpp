#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Stack{
	public:
		int top,size;
		char element[20];
		
		void init(){
			top=-1;}
		bool push(char ch){
			top++;
			if(isFull()){
				return 0;}
			element[top]=ch;
			return 1;}
		bool pop(){
			if(isEmpty()){
				return 0;}	
			top--;
			return 1;}
		char peek(){
			return element[top];}
		bool isEmpty(){
			if(top==-1)
				return 1;
			else
			    return 0;	}
     	bool isFull(){
     		if(top==(sizeof(element)/sizeof(char))-1){
     			return 1;}
			 else{
			    return 0;} }
};
bool isOperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
		return 1;
	}
	return 0;}
int precedence(char ch){
	switch(ch){
		case '+':
			return 1;
		case '-':
			return 1;
		case '*':
			return 2;
		case '/':
			return 2;
		case '^':
			return 3;				
	}
	return 0;
}
int main(){
    Stack oper,s1;
    oper.init();
    s1.init();
    int i=0,j=0,randi;
    string s="3+4*5/6";
    while(s[i]!='\0'){
    	if(!isOperator(s[i])){
    		s1.push(s[i]);
		}
		else {
			while(precedence(s[i])<=precedence(oper.peek())){
				s1.push(oper.peek());
				oper.pop();
			}
			if(precedence(s[i])>precedence(oper.peek())){
				oper.push(s[i]);
			}
		}
    	i++;
	}
	while(!oper.isEmpty()){
		s1.push(oper.peek());
		oper.pop();
	}
	cout<<s1.element;
    return 0;
}
