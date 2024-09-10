#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int fast_exp(int b,int p,int ans=1){
	if(p==0)
	return 1;
	if(p==1)
	return ans*b;
	if(p&1)
	return fast_exp(b*b,p>>1,ans*b);
	else
	return fast_exp(b*b,p>>1,ans);
//	int ans=1;
//	while(p>0){
//		if(p&1){
//			ans=ans*b;
//		}
//		b=b*b;
//		p=p>>1;
//	}
//	return ans;
}

int main(){
	cout<<fast_exp(2,4);
    return 0;
}
