#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int square_root(int size){
	int s=0,e=size,m,ans;
	while(s<=e){
		m=s+(e-s)/2;
		if(m*m==(size)){
			return m;
		}
		else if(m*m>(size)){
			e=m-1;
		}
		else{
			ans=m;
			s=m+1;
		}
	}
	return ans;
}
float step=0.1;
float pre(float ans,int tol,int key){
	for(int i=0;i<tol;++i){
		for(double j=ans;j*j<=key;j+=step){
			ans=j;
		}
		step/=10;
	}
	return ans;
}
int main(){
	int key=10;
	cout<<pre(square_root(key),5,key);
	
    return 0;
}
