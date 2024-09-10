#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int CS(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	return CS(n-1)+CS(n-2);
}
void print(vector<int>a,int n){
	if(n==0){
		return;
	}
	print(a,n-1);
	cout<<a[n-1]<<" ";
}
void key(string &s,int& n,int i,char& k,vector<int>&ans){
	if(i>=n){
		if(ans.size()==0){
			cout<<"not found";
			return;
		}
	}
	if(s[i]==k)
	ans.push_back(i);
	return key(s,n,i+1,k,ans);
}
void digit(int a){
	
	if(a==0){
		return;
	}
	digit(a/10);
	cout<<a%10<<" ";
}
int main(){
	//climb stairs recursive way
	//cout<<CS(5)<<endl; 
	
	//printing array
//	int a[]={1,2,3,4,5};
//	int n=5;
//	print(a,n);
//	cout<<endl;
	
	//finding key
//	string s="nakul uppal";
//	int nn=s.length();
//	char k='f';
//	vector<int>ans;
//	key(s,nn,0,k,ans);
//	print(ans,ans.size());

    //printing digits
    //digit(987);
    return 0;
}
