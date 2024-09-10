#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(int *a,int n){
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void swap(int &a,int &b){
	int temp=a; 
	a=b;
	b=temp; 
}
void selection(int *a,int n){
	int min;
	for(int i=0;i<n-1;++i){
		min=i;
		for(int j=1+i;j<n;++j){
		  min=(a[j]<a[min])?j:min;	 
		}
		if(min!=i){
			swap(a[i],a[min]);
		}
	} 
	print(a,n);
}
void bubble(int *a,int n){
	for(int i=0;i<n-1;++i){
		  for(int j=0;j<n-i;++j){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}  
	print(a,n);
} 
void bubble_optimized(int *a,int n){
	bool flag;
	for(int i=0;i<n-1;++i){
		flag =false;
		  for(int j=0;j<n-i;++j){
			if(a[j]>a[j+1]){
				flag=true;
				swap(a[j],a[j+1]);
			}
		}
		if(flag==false)
		break;
	}  
	print(a,n);
} 
void insertion(int *a,int n){
	for(int i=1;i<n;++i){
		int value =a[i],j;
		for( j=i-1;j>=0;--j){
			if(a[j]>value)
			  a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=value;
	}
	print(a,n);
}
int main(){
	int a[]={10,1,4,8,5,7},size=sizeof(a)/sizeof(int);
	selection(a,size);//for small array
	bubble(a,size);//i th largest element ko shift karna
	bubble_optimized(a,size);
	insertion(a,size);//partially sorted array
    return 0;
}
