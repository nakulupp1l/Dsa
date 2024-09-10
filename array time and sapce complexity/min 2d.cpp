#include<iostream>
#include<limits.h>
using namespace std;
int mini(int a[][3]){
	int min;
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			min=(min>a[i][j])?a[i][j]:min;
		}
	}
	return min;
}
int main(){
	int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	 cout<<"min :"<<mini(brr)<<endl;
	return 0;	
}
