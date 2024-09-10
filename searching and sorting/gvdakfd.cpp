#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int arr[]={4,1,2,3,5,1},answer=0;
	for(int i=0;i<6;++i){
		answer=answer^arr[i];
		cout<<answer<<" ";
	}
	cout<<answer;
	cout<<endl;
	for(int i=1;i<6;++i){
		answer=answer^i;
		cout<<answer<<" ";
	}
	cout<<endl<<answer;
    return 0;
}
