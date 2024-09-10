#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//is array sorted?
bool sorted(vector<int>&a,int i){
	if(i==a.size()-1)
	return 1;
	
	if(a[i]>a[i+1])
	return 0;
	else
	return sorted(a,i+1);
}
//binary search
int BS(vector<int>&a,int &s,int &e,int &key){
	int m=s+(e-s)/2;
	if(s>e)
	return -1;
	if(a[m]==key)
	return m;
	else if(a[m]>key){
		e=m-1;
	return BS(a,s,e,key);}
	else{
		s=m+1;
	return BS(a,s,e,key);}
}
//subsequence
void sub(string str,string o,int i){
	//base case
	if(i>=str.length()){
		cout<<o<<endl;
		return;
	}
	//include
	sub(str,o+str[i],i+1);
	//exclude
	sub(str,o,i+1);
}
//coin chain problem
int coin(vector<int>&a ,int target){
	if(target==0)
	return 0;
	if(target<0)
	return INT_MAX;
	int mini=INT_MAX;
	for(int i=0;i<a.size();++i){
		int ans=coin(a,target-a[i]);
		if(ans!=INT_MAX)
		mini=min(mini,ans+1);
	}
	return mini;
}
//maximum chain segments
int cut1(vector<int>& seg,int n){
	if(n==0){
		return 0;
	}
	if(n<0){
	return -1;	
	}
	int maxi=-1;
	for(int i=0;i<seg.size();++i){
		int ans=cut1(seg,n-seg[i]);
		if(ans!=-1)
		maxi=max(ans+1,maxi);
	}
	return maxi;
}
int cut(vector<int>& seg,int n){
	int ans=cut1(seg,n);
	if(ans<0)
	return 0;
	  return ans;
}
// max sum of non adjacent vlues
void maxisum(vector<int>&a,int i,int sum,int &maxi){
	if(i>=a.size()){
		maxi=max(maxi,sum);
		return;
	}
	//include
	maxisum(a,i+2,sum+a[i],maxi);
	//exclude
	maxisum(a,i+1,sum,maxi);
}
int main(){
//	vector<int>a={1};
//	cout<<sorted(a,0);

//    vector<int>a={0,1,2,3,4,5,6,7,8};
//    for(int i=0;i<10;++i){
//    	int s=0,e=a.size()-1;
//    	cout<<BS(a,s,e,i)<<" ";
//	}

    //sub("BHAI"," ",0);
    
//    vector<int>a={1,2};
//    cout<<coin(a,5);

//   vector<int>a={3,3,3};
//    cout<<cut(a,8);

    vector<int>a={3,9,3};
    int ans;
    maxisum(a,0,0,ans);
    cout<<ans<<endl;    
    return 0;
}
