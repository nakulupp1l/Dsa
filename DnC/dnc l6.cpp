#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool safe(int k,vector<vector<int>>&b,int i,int j){
	// row;
	for(int x=0;x<9;++x){
		if(b[i][x]==k)
		return 0;
	}
	//col;
	for(int x=0;x<9;++x){
		if(b[x][j]==k)
		return 0;
	}
	//3x3;
	for(int x=0;x<9;++x){
		if(b[3*(i/3) +(x/3)][3*(j/3)+(x%3)]==k)
		return 0;
	}
	return 1;
}
bool solve(vector<vector<int>>&b){
	for(int i=0;i<9;++i){
		for(int j=0;j<9;++j){
			if(b[i][j]==0){ 
				for(int k=1;k<=9;++k){
					if(safe(k,b,i,j)){
						b[i][j]=k;
						bool next_sol=solve(b);
						if(next_sol){
							return 1;
						}
						b[i][j]=0;
					}
				} 
				return 0; 
			}
		}
	}
	return 1;
}
int main(){
	vector<vector<int>>b(9,vector<int>(9,0));
	b[0]={4,5,0,0,0,0,0,0,0};
	b[1]={0,0,2,0,7,0,6,3,0};
	b[2]={0,0,0,0,0,0,0,2,8};
	b[3]={0,0,0,9,5,0,0,0,0};
	b[4]={0,8,6,0,0,0,2,0,0};
	b[5]={0,2,0,6,0,0,7,5,0};
	b[6]={0,0,0,0,0,0,4,7,6};
	b[7]={0,7,0,0,4,5,0,0,0};
	b[8]={0,0,8,0,0,9,0,0,0};
	solve(b);
	for(int i=0;i<9;++i){
		for(int j=0;j<9;++j){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
