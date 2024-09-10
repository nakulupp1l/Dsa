#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
void print(vector<vector<char>>&b,int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

//tc o(n)
//bool safe(int i,int j,vector<vector<char>>&b,int n){
//	int x,y;
//	//i=2 j=2
//	//1. (2,1)  (2,0)  j-1  till j=0
//	x=i,y=j;
//	while(y>0){
//		if(b[x][--y]=='Q')
//		return 0;
//	}
//	//2. (1,1)  (0,0)  i-1 j-1  till both equals 0
//	x=i,y=j;
//	while(y>0&&x>0){
//		if(b[--x][--y]=='Q')
//		return 0;
//	}
//	//3. (3,1)  till j>=0 ||i<n  i+1 j-1
//	x=i,y=j;
//	while(y>0 && x<n-1){
//		if(b[++x][--y]=='Q')
//		return 0;
//	//	x++;y--;
//	}
//	return 1;
//}

//tc o(1)
unordered_map<int ,bool> rc;
unordered_map<int ,bool> uld;
unordered_map<int ,bool> lld;
bool safe(int i,int j,vector<vector<char>>&b,int n){
	 if(!rc[i] && !uld[(n-1)+j-i] && !lld[i+j] )
	return 1;
	return 0;
}
void solve(vector<vector<char>>&b,int j,int n){
	//base case
	if(j>=n){
		print(b,n);
		return;}	
		
	//solve one case
	for(int i=0;i<n;++i){
		if(safe(i,j,b,n)){
			b[i][j]='Q';
			rc[i]=1;
			uld[(n-1)+j-i]=1;
			lld[i+j]=1;
			
			solve(b,j+1,n);
			
			b[i][j]='-';
			rc[i]=0;
			uld[(n-1)+j-i]=0;
			lld[i+j]=0;
		}
	}
}
int main(){
	int n=4;
	vector<vector<char>>b(n,vector<char>(n,'-'));
	int j=0;
	solve(b,j,n);
    return 0;
}
