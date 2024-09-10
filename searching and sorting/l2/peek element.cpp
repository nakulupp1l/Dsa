#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int a[]={3,4,5,6,7,1,2};
	int s=0,e=sizeof(a)/sizeof(int)-1;
	while(1){
		int mid=(s+e)/2;
		if(a[mid]>a[mid+1]){
			cout<<a[mid]<<endl;
			break; 
		}
		else if(a[mid]<a[mid-1]){
			cout<<a[mid-1]<<endl;
			break;
		}
		else if(a[s]<a[mid]){
			e=mid-1;
		}
		else if(a[s]>=a[mid]){
			s=mid+1;
		}
	}
    return 0;
}
