#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
bool safe(int i,int j,int r,int c){
	if(i>=0 &&i<r &&j>=0 &&j<c){
		return 1;
	}
	return 0;
}
void rat_maze(vector<vector<int>>&m,int r,int c,vector<vector<bool>>&v,int x,int y,string o,vector<string>&p){
	if(x==r-1 &&y==c-1){
		p.push_back(o);
		return;
	}
	//dlru
	//d
	if(safe(x+1,y,r,c) && m[x+1][y]==1 && v[x+1][y]==0){
		v[x+1][y]=1;
		rat_maze(m,r,c,v,x+1,y,o+'D',p);
		v[x+1][y]=0;
	}
	//l
	if(safe(x,y-1,r,c)&& m[x][y-1]==1 && v[x][y-1]==0){
		v[x][y-1]=1;
		rat_maze(m,r,c,v,x,y-1,o+'L',p);
		v[x][y-1]=0;
	}
	//r
	if(safe(x,y+1,r,c)&& m[x][y+1]==1 && v[x][y+1]==0){
		v[x][y+1]=1;
		rat_maze(m,r,c,v,x,y+1,o+'R',p);
		v[x][y+1]=0;
	}
	//u
	if(safe(x-1,y,r,c)&& m[x-1][y]==1 && v[x-1][y]==0){
		v[x-1][y]=1;
		rat_maze(m,r,c,v,x-1,y,o+'U',p);
		v[x-1][y]=0;
	}
	
}
int main(){
	vector<vector<int> >maze{{1,0,0},{1,1,0},{1,1,1}};
	int r=3,c=3;
	vector<vector<bool>>visited(r,vector<bool>(c,0));
	int i=0,j=0;
	visited[i][j]=0;
	vector<string>path;
	string ans="";
	rat_maze(maze,3,3,visited,0,0,ans,path);
	for(auto x:path){
		cout<<x<<endl;
	}
	
    return 0;
}
