#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int BS(vector<int>v,int s,int e,int x){
	while(s<=e){
		int mid=s+(e-s)/2;
		if(v[mid]==x)
		return mid;
		else if(v[mid]<x){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return -1;
}
int min(int x,int y){
	return (x<=y)?x:y;
}
int main(){
	 vector<int>v={3,4,5,6,11,13,14,15,56,70};
	 int i=0,x=13;
	 	if(v[i]==x){
	 		cout<<i;
		 }
	 	else{
	 	i=1;
	 	while(i<v.size()&&v[i]<=x){
	 		i*=2;
		 }
        cout<<BS(v,i/2,min(i,v.size()-1),x);
    }
    return 0;
}
