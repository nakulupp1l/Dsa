#include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<unordered_map>
#include<queue>
#include<limits.h>
#include<set>
using namespace std;
class graph{
	public:
		unordered_map<int,list<pair<int,int>>>a_list;
		void addEdge(int u,int v,int wt,bool dir){
			a_list[u].push_back({v,wt});
			if(!dir){
				a_list[v].push_back({u,wt});
			}
		}
		void print(){
			for(auto i:a_list){
				cout<<"for "<<i.first<<" -->";
				for(auto j:i.second){
					cout<<"("<<j.first<<","<<j.second<<")"<<"  ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		void topological_sort(int src,vector<bool>&visited,stack<int>&ans){
			visited[src]=1;
			for(auto i:a_list[src]){
				int v=i.first;
				if(visited[v]!=1){
					topological_sort(v,visited,ans);
				}
			}
			ans.push(src);
		}
		void ssc(){
			stack<int>ans;
			vector<bool>visited;
			int src=0;
			topological_sort(src,visited,ans);
			while(!ans.empty()){
				cout<<ans.top()<<" ";
				ans.pop();
			}
		}
};

int main(){
	graph g;
	g.addEdge(0,1,1,1);
	g.addEdge(1,2,1,1);
	g.addEdge(2,3,1,1);
	g.addEdge(3,0,1,1);
	g.addEdge(2,4,1,1);
	g.addEdge(4,5,1,1);
	g.addEdge(5,6,1,1);
	g.addEdge(6,4,1,1);
	g.addEdge(6,7,1,1);
	g.ssc();
    return 0;
}
