#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int l=8,h=20,ans=0;
	if(!h){
		cout<<"element is 0 return 0"<<endl;
	}
	vector<bool> prime(h,1);
	prime[0]=prime[1]=0;
	for(int i=2;i<h;++i){
		if(prime[i]){
			if(i>=l){
				ans++;
			}
			int j=2*i;
			while(j<h){
				prime[j]=0;
				j=j+i;
			}
		}
	}
	cout<<ans<<endl;
    return 0;
}
