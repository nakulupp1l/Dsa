#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void swap(char& a,char& b){
	char t=a;
	a=b;
	b=t;
}
void permutation(string &str,int i){
	if(i>=str.length()){
		cout<<str<<endl;
		return;
	}
	for(int j=i;j<str.length();++j){
	swap(str[i],str[j]);
	permutation(str,i+1);
	//backtracking
	swap(str[i],str[j]);
	}
}
int main(){
	string a="abc";
	permutation(a,0);
    return 0;
}
