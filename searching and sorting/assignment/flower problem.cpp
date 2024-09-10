#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
bool Possible(vector<int>v,int bouque,int nof,int ans){
	long long c=0,none=0;
	for(int i=0;i<v.size();++i){
		if(v[i]<=ans){
			++none;//flower ka no.
			if(none==nof){
                none=0;
				c++;//bouque ka no.
				if(c==bouque){
					return 1;
				}
			}
		}
		else{
			none=0;
		}
	}
	return 0;
}
    long long minDays(vector<int>& v, long long bouque, long long nof) {
      long long n=v.size(),ans=-1;
	long long s=0,e=*max_element(v.begin(),v.end());
	long long total=bouque*nof,mid;
	if(n<total){
		return ans;
	}
	else{
		while(s<=e){
			mid=s+(e-s)/2;
			if(Possible(v,bouque,nof,mid)){
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
};
int main(){
	return 0;
}
//working on leetcode
