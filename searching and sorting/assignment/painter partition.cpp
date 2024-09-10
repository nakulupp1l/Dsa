#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<numeric>
using namespace std;
bool isPossible(vector<int>a,int painter,int ans){
	int sum=0,c=1;
	for(int i=0;i<a.size();++i){
		if(a[i]>ans){
			return 0;
		}
		else if(sum+a[i]<=ans){
			sum+=a[i];
		}
		else{
			++c;
			sum=a[i];
			if(c>painter){
				return 0;
			}
		}
	}
	return 1;
}
int paint(vector<int>a,int painter,int total){
	int s=0,e=total,mid,i=0,ans=-1;
	if(a.size()>=painter){
		while(s<=e){
			mid=s+(e-s)/2;
			if(isPossible(a,painter,mid)){
				ans=mid;
				e=mid-1;
			}
			else{
				s=mid+1;
			}
		}
	}
	return ans;
}
int main(){
	vector<int>v={10,20,30,40};
	int total,painter=2;
    total=accumulate(v.begin(),v.end(),0);
    cout<<paint(v,painter,total);
    return 0;
}
