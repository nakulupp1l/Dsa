#include<iostream>
#include<cstring>
using namespace std;
void print(int a[],int n){
	int i;
	for(i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}
void input(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
void linear(int a[],int x,int n){
	int i;
	bool c=false;
	for(i=0;i<n;i++){
		if(a[i]==x){
			cout<<"element found at index "<<i<<endl;
	        c=true;
			break;
		}
	}
	if(c==false){
		cout<<"element not found"<<endl;
	}
}
void binary(int a[],int n){
	int one=0,i,zero=0;
	for(i=0;i<n;++i){
		if(a[i]==1){
			one++;
			continue;
		}
		if(a[i]==0){
			zero++;
		}
	}
	cout<<"1's "<<one<<endl<<"0's "<<zero<<endl;
}
int maximum(int a[],int n){
	int max=a[0],i;
	for(i=1;i<n;++i){
		max=(a[i]>max)?a[i]:max;
	}
	return max;
}

int minimum(int a[],int n){
	int i,min=INT_MAX;
	for(i=0;i<n;++i){
		min=(a[i]<min)?a[i]:min;
	}
	return min;
}
void extreme(int a[],int n){
	int start,end;
	start=0;
	end=n-1;
	while(1){
		if(start>end)
		break;
		
		if(start==end){
			cout<<a[start]<<" ";
		}
		else
		cout<<a[start]<<" "<<a[end]<<" ";
		--end;
		++start;
	}
}
void reverse(int a[],int n){
	int start=0,end=n-1,temp;
	while(start<end){
//		if(start>=end){
//			break;
//		}
	   temp=a[start];
	   a[start]=a[end];
	   a[end]=temp;
	   ++start;
	   --end;
	}
}
int main(){
//	int arr[53];
//	char a[106];
//	bool b[23];

//int a[]={1,2,3,4};
//address of an array
//cout<<a;

//dynamic array
//int *a =new int; 

//array printing double of every element
//int i,a[5];
//for(i=0;i<5;++i){
//	cin>>a[i];
//}
//for(i=0;i<5;++i){
//	cout<<2*a[i];
//	cout<<endl;
//}

//memset is used for character array
//for integer array it will print 0 and -1 properly
//int i;
// char a[]="nakul";
//memset(a,'x',sizeof(a));
//for(i=0;i<5;++i){
//	cout<<a[i]<<" ";
//}

int n;
//int *c=new int(n);
//linear search
//int x;
//cout<<"enter array size :";
//cin>>n;
//input(a,n);
//cout<<"enter element to be searched :";
//cin>>x;
//linear(a,x,n);

//count 0 and 1 in an array
//cout<<"enter array size :";
//cin>>n;
//int c[n];
//input(c,n);
//binary(c,n);

//max no. in array
//cout<<"enter size of array :";
//cin>>n;
//int a[n];
//input(a,n);
//cout<<"max no. is "<<maximum(a,n);

//minimum in an array
//cout<<"enter size of an array ";
//cin>>n;
//int a[n];
//input(a,n);
//cout<<"minimum no. is "<<minimum(a,n);


cout<<"enter size of an array ";
cin>>n;
int a[n];
input(a,n);
//extreme print
// extreme(a,n);

//reverse an array
reverse(a,n);
print(a,n);

	return 0;
}
