#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int fact(int n){
	//base case
	if(n==1 ||n==0)
	return 1;
	//recursive relation
	return n*fact(n-1);
}
void count(int n){
	cout<<n<<" ";
	if(n==1)
		return;
    count(n-1);

//    if(n==0)
//    return;
//    count(n-1);
//    cout<<n<<" ";
}
int fib(int n){
//	//bc
//	//if 0 is first term and 1 is second term
//	if(n==1 ||n==2){
//		return n-1;
//	}
//	//rr
//	return fib(n-1)+fib(n-2);
	
	//bc
	//if 0 is zero th term and 1 is first term
	if(n==0 ||n==1){
		return n;
	}
	//rr
	return fib(n-1)+fib(n-2);
}
int main(){
	cout<<fact(5)<<endl;
	count(10);
	cout<<endl;
	cout<<fib(10)<<endl;
    return 0;
}
