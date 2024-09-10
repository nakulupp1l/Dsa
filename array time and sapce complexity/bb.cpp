#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n;
	cout<<"enter size of array :";
    cin>>n;
     vector<int>a(n);
     for(int i=0;i<a.size();++i){
		cin>>a[i];
	}
    int s=0,e=n-1,x=0;
    while(s<e){
    	cout<<"while working";
    	if(a[x]==0){
    		cout<<"a at 0 if"<<endl;
    		swap(a[x],a[s]);
    		s++;
    		x++;
		}
		if(a[x]==1){
			cout<<"a at 1 if"<<endl;
			swap(a[x],a[e]);
			e--;
		}
	}
	for(int i=0;i<a.size();++i){
		cout<<a[i]<<" ";
	}
}
