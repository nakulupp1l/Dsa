#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
bool Possible(std::vector<int>v,int bouque,int nof,int ans){
	int c=0,none=0;
	for(int i=0;i<v.size();++i){
		if(v[i]>=ans){
			++none;
			if(none==nof){
				c++;
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
int flower(vector<int>v,int bouque,int nof){
	int n=v.size(),ans=-1;
	int s=0,e=max(v.begin(),v.end()),mid;
	if(n<bouque*nof){
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
}
using namespace std;
int main(){
	vector<int>v={1,10,3,10,2};
	int m=3,k=1;
    return 0;
}

