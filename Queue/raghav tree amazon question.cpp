#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int solve(vector<int>x){
	vector<int>ans(x.size());
	for(int i=0;i<x.size();++i){
		ans[i]=x[i];
	}
	vector<int>sum;
	int j=0;
	//find 4 sum oh yeaahh
	for(int i=1;i<=2;i++){
		int s=0;
		j=i;
		while(j<x.size()+1){
			s+=x[j-1];
			j=2*j+1;
		}
		sum.push_back(s);
		s=0;j=i;
		while(j<x.size()+1){
			s+=x[j-1];
			j=2*j+2;
		}
		sum.push_back(s);
	}
	int mini=*min_element(sum.begin(),sum.end());
	//now in pair of 2 find which one is closer to mini
	int a=0,b;
	for(int i=0;i<2;i++){
		b=a+1;
		int c=min(sum[a],sum[b]);
		int diff=c-mini;
		//now delete from parent
		if(diff>1){
			x[i]-=diff;
			x[2*i+2]=x[2*i+3]=mini-x[0];
		}
		//agar answer leafs pe depend karee
		else{
			//parent pe kya value hai nikalo phele
			int parent=x[0];
			x[2*i+2]=x[2*i+3]=mini-x[0];
		}
		a=b+1;
	}
	int answer=0;

	for(int i=0;i<x.size();++i){
		int diff=ans[i]-x[i];
		//cout<<diff<<" ";
		answer+=diff;
	}
	return answer;
}
int main(){
	vector<int>x={6,3,7,4,5,4};
	cout<<solve(x);
    return 0;
}
