#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int odd(int *a,int n){
	int s=0,e=n-1,mid;
	while(s<=e){
		mid=s+(e-s)/2;
		if(s==e){
			return s;
		}
	else if (mid%2==0){
		if(a[mid]==a[mid+1]){
			s=mid+2;
		}
		else{
			e=mid; 
		}
	}
	else{
		if(a[mid]==a[mid+1]) {
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
}
return -1;	
}
int main(){
	int a[]={1,1,2,2,3,3,9,4,4,600,600,4,4};
	int size=sizeof(a)/sizeof(int);
	cout<<odd(a,size);
    return 0;
}
