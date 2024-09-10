#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
bool Possible(vector<int>v,int ans,int noc){
	int initial=v[0],c=1;
	for(int i=1;i<v.size();++i){
		if(v[i]-initial>=ans){
			++c;
			initial=v[i];
			if(noc==c){
				return 1;
			}
		}
	}
	return 0;
}
int cow(vector<int>v,int noc){
	sort(v.begin(),v.end());
	int s=0,e=*max_element(v.begin(),v.end()),mid,ans=-1;
	while(s<=e){
		mid=s+(e-s)/2;
		if(Possible(v,mid,noc)){
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
	vector<int>v={1,2,5,7,10};
	int k=3;
	cout<<cow(v,k);
    return 0;
}
