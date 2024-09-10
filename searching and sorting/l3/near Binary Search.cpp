#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int BS_near(int *a,int n,int x){
	int s=0,e=n-1,mid;
	while(s<e){
		mid=s+(e-s)/2;
		if(a[mid]==x){
			return mid;
		}
		if(mid-1>=s&&a[mid-1]==x){
			return mid-1;
		}
		if(mid+1<=e&&a[mid+1]==x){
			return mid+1;
		}
		else if(a[mid]<x){
			s=mid+2;
		}
		else{
			e=mid-2;
		}
	}
	return -1;
}
int main(){
	int a[]={10,3,40,2,50,80,70},size=sizeof(a)/sizeof(int);
	int key=40;
	cout<<BS_near(a,size,key);
    return 0;
}
