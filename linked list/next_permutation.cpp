#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
void next_permutation(vector<int>&a){
	int n=a.size(),index=-1;
	for(int i=n-2;i>=0;--i){
		if(a[i]<a[i+1]){
			index=i;
			break;
		}
	}
	if(index==-1){
		sort(a.begin(),a.end());
		return;
	}
	for(int i=n-1;i>index;--i){
		if(a[i]>a[index]){
			swap(a[i],a[index]);
			break;
		}
	}
	sort(a.begin()+index+1,a.end());
}
int main(){
	vector<int>x{2,3,1};
	next_permutation(x);
	for(int i=0;i<x.size();++i){
		cout<<x[i];
	}
    return 0;
}
