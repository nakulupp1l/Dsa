#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void swap(char& a,char& b){
	char temp=a;
	a=b;
	b=temp;
}
void rev(string& a,int i){
	if(i>=(a.length()-1)-i){
		return;}
	swap(a[i],a[a.length()-1-i]);
	rev(a,i+1);
}
int main(){
	string a="abc";
	rev(a,0);
	cout<<a<<endl;
    return 0;
}
