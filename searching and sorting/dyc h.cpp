#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool isOperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
		return 1;
	}
	return 0;
}
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
	stack<char>oper;
	stack<char>s1;
    int i=0,j=0;
    string s="a+b-c*d";
    while(s[i]!='\0'){
    	if(!isOperator(s[i])){
    		s1.push(s[i]);
    		cout<<"hello";
		}
		else{
			oper.push(s[i]);
			if(precedence(oper.element[oper.top])<precedence(oper.element[oper.top-1])){
				s1.push(oper.peek());
				oper.pop();
			}
		}
		i++;
	}
    return 0;
}
