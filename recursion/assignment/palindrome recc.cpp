#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool palin(string& a,int i){
	//base case
	if(i>=a.length()-1-i){
		return 1;
	}
	//solve one case
	if(a[i]!=a[a.length()-1-i])
	return 0;
	else
	return palin(a,i+1);
}
int main(){
	string a="raceecar";
	cout<<palin(a,0);
    return 0;
}
