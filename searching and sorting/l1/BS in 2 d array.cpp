#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	bool flag=0;
	int arr[][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16},
	{17,18,19,20}};
    int s=0,e=sizeof(arr)/sizeof(int)-1,key=90,m;
	int cn=sizeof(arr[1])/sizeof(int),rn=(e+1)/cn,ri,ci;
    while(s<=e){
    	m=s+(e-s)/2;
    	ri=m/cn;
    	ci=m%cn;
    	int element=arr[ri][ci];
    	if(element==key){
    		flag=1;
    		cout<<" found at ("<<ri<<","<<ci<<")"<<endl;
    		break;
		}
		else if(element<key){
			s=m+1;
		}
		else{
			e=m-1;
		}
	}
	if(!flag){
		cout<<"not found"<<endl;
	}
    return 0;
}
