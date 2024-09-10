#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int BS(int *a,int size){
	int s=0,e=size,mid;
	do{
		mid=s+(e-s)/2;
		if(a[mid]==mid+1){
			s=mid+1;
		}
		else if(a[mid]>mid+1){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		
		if(a[mid]==mid+2)
		return mid;
	}while(s<=e);
	return mid;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,11,12,13};
	cout<<BS(arr,sizeof(arr)/sizeof(int))+1;
    return 0;
}
