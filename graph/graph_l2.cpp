#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
//cycle detection 
class graph{
	public:
		unordered_map<int,list<int>>a_list;
		void addEdge(int u,int v,bool dir){
			a_list[u].push_back(v);
			if(!dir){
				a_list[v].push_back(u);
			}
		}
		void print(){
			for(auto i:a_list){
				cout<<"for "<<i.first<<" -->";
				for(auto j:i.second){
					cout<<j<<" ";
				}
				cout<<endl;
			}
		}
		
		bool checkCycleUsingBfs(int src,unordered_map<int ,bool>&visited){
			queue<int>q;
			unordered_map<int,int>parent;
			q.push(src);
			visited[src]=1;
			parent[src]=-1;
			while(!q.empty()){
				int f=q.front();
				q.pop();
				for(auto i:a_list[f]){
					if(!visited[i]){
						q.push(i);
						visited[i]=1;
						parent[i]=f;
					}
					else{
						if(i!=parent[f]) return 1; 
					}
				}
			}
			return 0;
		}
		bool checkCycleUsingDfs(int src,unordered_map<int,bool>&visited){
			stack<int>st;
			unordered_map<int,int>parent;
			st.push(src);
			visited[src]=1;
			parent[src]=-1;
			while(!st.empty()){
				int f=st.top();
				st.pop();
				for(auto i:a_list[f]){
					if(!visited[i]){
						visited[i]=1;
						parent[i]=f;
						st.push(i);
					}
					else{
						if(parent[f]!=i) return 1;
					}
				}
			}
			return 0;
		}
		
		//for directed graph
		bool cycle_dfs_directed(int src,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfs){
			visited[src]=1;
			dfs[src]=1;
			bool ans=0;
			for(auto i:a_list[src]){
				if(!visited[i]){
					ans=cycle_dfs_directed(i,visited,dfs);
					if(ans) return 1;
				}
				else{
					if(dfs[i]) return 1;
				}
			}
			dfs[src]=0;
			return 0;
		}
			
};
int main(){
//	graph g;
//	g.addEdge(0,1,1);
//	g.addEdge(1,2,1);
//	g.addEdge(3,2,1);
//	g.addEdge(3,4,1);
//	g.addEdge(2,5,1);
//	g.addEdge(2,6,1);
//	//g.addEdge(5,6,1);
//	g.print();
//	bool ans=0;
//	unordered_map<int,bool>visited;
//	for(auto i:g.a_list){
//		if(!visited[i.first]){
//			//ans=g.checkCycleUsingBfs(i.first,visited);
//			ans=g.checkCycleUsingDfs(i.first,visited);
//			
//			if(ans) break;
//		}
//	}
//	if(ans) cout<<"cycle present"<<endl;
//	else cout<<"cycle not present"<<endl;

    graph g;
	g.addEdge(0,1,1);
	g.addEdge(1,2,1);
	g.addEdge(1,5,1);
	g.addEdge(1,6,1);
	g.addEdge(2,3,1);
	g.addEdge(3,4,1);
	g.addEdge(3,7,1);
	g.addEdge(6,5,1);
	g.addEdge(7,8,1);
	//g.addEdge(8,7,1);
	g.addEdge(8,3,1);
	g.print();
	bool ans=0;
	unordered_map<int,bool>visited;
	unordered_map<int,bool>dfs;
	for(auto i:g.a_list){
		if(!visited[i.first]){
			ans=g.cycle_dfs_directed(i.first,visited,dfs);
			if(ans) break;
		}
	}
	if(ans) cout<<"cycle present"<<endl;
	else cout<<"cycle not present"<<endl;
    return 0;
}
