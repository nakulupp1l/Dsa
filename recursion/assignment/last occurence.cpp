#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void occ(string a,int i,int &pre,char key){
	if(i>=a.length()){
		return ;
	}
	if(a[i]==key){
		pre=i;
		return;
	}
	return occ(a,i+1,pre,key);
}
void occ2(string a,int i,int &pre,char key){
	if(i<0){
		return ;
	}
	if(a[i]==key){
		pre=i;
		return;
	}
	return occ(a,i-1,pre,key);
}
int main(){
	string a="abcddefg";
	int ans=-2;
	//occ(a,0,ans,'d');
	//cout<<ans<<endl;
	//ans=-1;
	occ2(a,a.length()-1,ans,'d');
	cout<<ans<<endl;
    return 0;
}
//search strrchr()   H.W.
