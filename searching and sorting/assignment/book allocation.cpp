#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>A,int n,int m,int ans){
	int sum=0,c=1;
	for(int i=0;i<A.size();++i){
		if(A[i]>ans){
			return 0;
		}
		else if(sum+A[i]<=ans){
			sum+=A[i];
		}
		else{
		++c;
		sum=A[i];
		if(c>m){
			return 0;
		}	
		}
	}
	return 1;
}
int main(){
	vector<int>v={12,34,67,90};
	int nos=2,nop=0;
	for(int i=0;i<v.size();++i){
		nop+=v[i];}
	//or use accumulate function
	int s=0,e=nop,mid,ans=-1;
	if(nos>v.size()){
		
	}
	else{
	
	while(s<=e){
		mid=s+(e-s)/2;
		if(isPossible(v,v.size(),nos,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}}
	cout<<ans;
    return 0;
}
