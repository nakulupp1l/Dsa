#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//it is done by recursion only for understanding
//we will do it using DP after wards
int dice_1155(int n,int k,int t){
	//base case
	if(n==0 &&t==0)
	return 1;
	if(n==0 && t!=0)
	return 0;
	if(n!=0 &&t==0)
	return 0;
	if(t<0)
	return 0;
	//solve one case
	int ans=0;
	for(int i=1;i<=k;++i){
		ans+=dice_1155(n-1,k,t-i);
	}
	return ans;
}
int main(){
	cout<<dice_1155(3,2,6);
    return 0;
}
