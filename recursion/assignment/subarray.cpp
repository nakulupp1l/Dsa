#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void sub(vector<int>v,int s,int e){
	if(e>=v.size())
	return;
	
	for(int i=s;i<=e;++i)
	cout<<v[i]<<" ";
	cout<<endl;
	
	sub(v,s,e+1);
}
void subarr(vector<int>v,int i){
//	for(int i=0;i<v.size();++i){
//		sub(v,i,i);
//	}
    if(i>=v.size())
    return;
    
    sub(v,i,i);
    
    subarr(v,i+1);
}
int main(){
	vector<int>v={1,2,3,4,5};
	subarr(v,0);
    return 0;
}
