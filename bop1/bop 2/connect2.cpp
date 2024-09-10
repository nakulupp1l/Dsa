#include<iostream>
#include<math.h>
using namespace std;
void printd(int n){
	int x;
	while(n>0){
		cout<<n%10<<endl;
		n=n/10;
	}
}
float kmTOmile(int x){
	return (x*5)/8;
}

int d_b(int x){
//	int n=0,i=0,bit;
//	while(x>0){
//		bit=x%2;
//		n=bit*pow(10,i++)+n;
//		x=x/2;
//	}
//	return n;
int bit,i=0,ans=0;
while(x>0){
	bit=x&1;
	ans=pow(10,i++)*bit+ans;
	x=x>>1;
}
return ans;
}

int b_d(int x){
	int i=0,ans=0,n;
	while(x>0){
		n=x%10;
		ans=pow(2,i++)*n+ans;
		x=x/10;
	}
	return ans;
}
int main(){
	int i;
	//print digits
	//int a;
	//cin>>a;
	//printd(a);
	
	
	//digit to a no.
//	int a[]={1,2,3,4};
//	int ans=0;
//	for(i=0;i<4;++i){
//		ans=ans*10+a[i];
//	}
//	cout<<ans<<endl;


    //to count no. of set bits
//     int a,count=0;
//     cin>>a;
//     int ans=a|0;
//     while(ans>0){
//     	if(ans%2==1){
//     		count++;
//		 }
//		 ans=ans/2;
//	 }
//      cout<<count;
// as % is a very high and complex operation so we try to use different method
    
//    int a,count=0,ans=0;
//    cin>>a;
//    while(a>0){
//    	if(a&1){
//    		count++;
//		}
//		a>>=1;
//	}
//	cout<<count;

//this is not working for negetive no. 
//However, if right-shift of a negative number is 
//defined to shift in 1s to the highest bit positions,
//then on a 2s complement representation it will behave
//as an arithmetic shift - the result of right-shifting
//by N will be the same as dividing by 2 N, rounding 
//toward negative infinity.

 
    //convert km to miles 1mile =1.6 km
//    int a;
//    cin>>a;
//    cout<<kmTOmile(a);


//decimal to binary
int n;
cin>>n;
cout<<b_d(n);
	return 0;
}
