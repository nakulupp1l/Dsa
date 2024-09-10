#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int lowerBound(vector<int>v,int x){
	int s=0,e=v.size()-1,ans=-1;
	while(s<=e){
		int m=s+(e-s)/2;
		if(v[m]>=x){
			ans=m;
			e=m-1;
		}
		else if(v[m]<x){
			s=m+1;
		}
		else{
			e=m-1;
		}
	}
	return ans;
}
vector<int> kClosest(vector<int>&v,int x,int k){
	vector<int>diff,ans;
	int low=0,high=v.size()-1;
	while(high-low>=k){
		if(x-v[low]>v[high]-x){
			low++;
		}
		else
			high--;
		}
	
	for(int i=low;i<=high;i++){
		ans.push_back(v[i]);
	}
	return ans;
}
vector<int> secondway(vector <int>v,int x,int k){
	int h=lowerBound(v,x);
	int l=h-1;
	while(k--){
		if(l<0){
			h++;
		}
		else if(h>=v.size()){
		l--; 	
		}
		else if(x-v[l]>v[h]-x){
			h++;
		}
		else{
			l--;
		}
	}
	return vector<int>(v.begin()+l+1,v.begin()+h);
}
int main(){
	vector<int>v={12,16,22,30,35,39,42,45,48,50,53,55,56};
	int x=35,k=4;
	vector<int>ans=kClosest(v,x,k);
	for(int  i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	vector<int>ans2=secondway(v,x,k);
	for(int  i=0;i<ans2.size();i++){
		cout<<ans[i]<<" ";
	}
    return 0;
}
