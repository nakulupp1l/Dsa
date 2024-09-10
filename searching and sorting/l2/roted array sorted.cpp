#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int BS(int *a,int s,int e,int key){
	while(s<=e){
		int mid=s+(e-s)/2;
		if(a[mid]==key){
			while(a[mid]==a[mid-1]&&mid>0){
				--mid;
			}
			return mid;
		}
		else if(key>a[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return -1;
}
int pivot_index(int *a,int size){
	int s=0,e=size-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(s==e){
			return s;
		}
		if(a[mid]>a[mid+1]){
			return mid;
		}
		else if(a[mid-1]>a[mid]){
		    return mid-1;
		}
		else if(a[s]>a[mid]){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
}
int main(){   
	int a[]={7,7,7,7,1,2},ans,key,final;
	int e=sizeof(a)/sizeof(int)-1;
	ans=pivot_index(a,7);
	cout<<ans;
	cout<<"enter key:";
	cin>>key;
	if(key<=a[ans]&&key>=a[0]){
		final=BS(a,0,ans,key);
	}
	else{
		final=BS(a,ans+1,e,key);
	}
	cout<<final<<endl;
    return 0;
}
