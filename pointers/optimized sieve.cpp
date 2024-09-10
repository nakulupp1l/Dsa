#include<iostream>
#include<vector>
#include<stack>
#include<math.h>
using namespace std;
//vector<bool> Sieve(int n){
//	vector<bool> x(n+1,1);
//	x[0]=x[1]=0;
//	for(int i=2;i<=n;++i){
//		if(x[i]){
//			int j=i*2;
//			while(j<=n){
//				x[j]=0;
//				j+=i;
//			}
//		}
//	}
//	return x;
//}

//optimized:::
vector<bool> Sieve(int n){
	vector<bool> x(n+1,1);
	x[0]=x[1]=0;
	for(int i=2;i<=ceil(sqrt(n));++i){//change
		if(x[i]){
			int j=i*i;  //change   
			while(j<=n){
				x[j]=0;
				j+=i;
			}
		}
	}
	return x;
}

//optimized segmented sieve
vector<bool> OSS(int L,int R){
	vector<bool> x=Sieve(sqrt(R));
	vector<int>prime;
	for(int i=0;i<x.size();++i){
		if(x[i]){
			prime.push_back(i);
		}
	}
	vector <bool>ans(R-L-1);
	if(L<=1){
		ans[L]=0;
	}
	for(auto i:prime){
		int mul=(L/i)*i;
		if(mul<L){
			mul+=prime;
		}
		int j
	}
	
	
}
int main(){
	vector<bool>ans=Sieve(1000000);
	for(int i=0;i<ans.size();++i){
		if(ans[i]){
			cout<<i<<" ";
		}
	}
    return 0;
}
