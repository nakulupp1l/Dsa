#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int gcd(int a,int b){
	if(a==0)
	return b;
	if(b==0)
	return a;
	int max=(a>=b)?a:b;
	int min=(a<=b)?a:b;
	return gcd(max-min,min);
}
int main(){
	cout<<gcd(16,20);
    return 0;
}
