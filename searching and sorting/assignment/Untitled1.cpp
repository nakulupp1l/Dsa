#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>v,int key,int mid){
	int sum=0;
	for(int i=0;i<v.size();++i){
		if(v[i]>mid)
		sum+=v[i]-mid;
	}
	if(sum>=key){
		return 1;
	}
	return 0;
}
int max(vector<int>tree ,int key){
	int ans=-1,s,e;
	e=*max_element(tree.begin(),tree.end());
	while(s<=e){
		int mid=s+(e-s)/2;
		if(isPossible(tree,key,mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}
int main(){
	int n,m;
	//n= no. of trees
	//m=how much wood required
	cin>>n>>m;
	vector<int>v;
	while(n--){
		int height;
		cin>>height;
		v.push_back(height);
	}
	cout<<"answer :"<<max(v,m);
    return 0;
}
