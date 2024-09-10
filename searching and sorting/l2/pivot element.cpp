#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int pivot(int *a,int e){
	int s=0;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(s==e){
			return s;
		}
		if(a[mid]>a[mid+1]&&mid+1<=e){
			return mid;
		}
	    if(a[mid]<a[mid-1]&&mid-1>=s){
			return mid-1;
		}
		if(a[s]>a[mid]){
			e=mid-1;
		}
		else {
			s=mid+1;
		}
	}
    return -1;
}
int main(){
	int a[]={3,6};
	int e=sizeof(a)/sizeof(int)-1;
	cout<<pivot(a,e);
}
