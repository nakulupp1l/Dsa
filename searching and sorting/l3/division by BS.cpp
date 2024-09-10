#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int divide(int x,int y){
	//condn
	if((x==0&&y==0)||y==0){
		cout<<"not defined"<<endl;
		return 0;
	}
	//start
	int divisor=abs(y);
	int divident=abs(x);
	int s=0,e=divident-1,mid,ans;
	while(s<=e){
		mid=s+(e-s)/2;
		if(mid*divisor==divident){
		      ans= mid;
		      break;
		}
		else if(mid*divisor<divident){
			s=mid+1;
			ans=mid;
		}
		else{
			e=mid-1;
		}
	}
	if((x>0&&y>0) || (x<0&&y<0))
	return ans; 
	else
	return -ans;
}
float approx(int x,int y,int tol,int ans){
	float final=ans,step=0.1;
	for(int i=0;i<tol;++i){
		for(float j=final;j*y<=x;j+=step){
			final=j;
		}
		step/=10;
	}
	return final;
}
int main(){
	int x=22,y=7;
	cout<<approx(x,y,3,divide(x,y));
    return 0;
}
