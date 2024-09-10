#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
//int BS(int *a,int size,int key){
//	int s=0,e=size,mid;
//	do{
//		mid=s+(e-s)/2;
//		if(a[mid]==key)
//		return mid;
//		else if(a[mid]>key){
//			e=mid-1;
//		}
//		else{
//			s=mid+1;
//		}
//	}while(s<=e);
//	return -1;
//}
//int main(){
//	int arr[]={1,2,3,4,5},key=4,size=5;
//	int index=BS(arr,size,key);
//	if(index==-1){
//		cout<<"no element found"<<endl;}
//	else{
//		cout<<"found at "<<index<<endl;}
//	return 0;
//}}
//int main(){
//    vector<int>v{1,2,3,4,5};
//    int arr[]={1,2,3,4,5};
//    if(binary_search(v.begin(),v.end(),9)){
//	cout<<"found"<<endl;
//    }
//    else{
//	cout<<"not found"<<endl;
//    }
//    for(auto value:v)
//    cout<<value<<" ";
//    cout<<endl;
//    if(binary_search(arr,arr+sizeof(arr)/sizeof(int),2)){
//	cout<<"found"<<endl;
//    }
//    else{
//	cout<<"not found"<<endl;
//    }
//    return 0;
//}

//find first repeating element
int firstOccurence(int a[],int size,int key){
	int s=0,e=size,mid,ans=-1;
	mid=s+(e-s)/2;
	do{
		
		if(a[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}while(s<=e);
	return ans;
}
int main(){
	int arr[]={1,3,4,4,4,4,6,7};
	int index=firstOccurence(arr,sizeof(arr)/sizeof(int),4);
	cout<<index<<endl;
	return 0;
}