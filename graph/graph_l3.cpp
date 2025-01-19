  #include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;
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
        //topological sort using dfs
        void ts_dfs(int src,unordered_map<int,bool>&visited,stack<int>&ans){
            visited[src]=1;
			for(auto i:a_list[src]){
        		if(!visited[i]){
        			ts_dfs(i,visited,ans);
				}
			}
			ans.push(src);
		}
        //topological sort using bfs
        //kahn's algorithm
        void ts_bfs(int n){
        	queue<int>q;
        	vector<int>ans;
        	vector<int>indegree(n,0);
        	for(auto i:a_list){
        		for(auto j:i.second){
        			indegree[j]++;
				}
			}
			for(int i=0;i<n;++i){
				if(indegree[i]==0){
					q.push(i);
				}
			}
			while(!q.empty()){
				for(auto i:a_list[q.front()]){
					indegree[i]--;
					if(indegree[i]==0) q.push(i);
				}
				ans.push_back(q.front());
				q.pop();
			}
			
			if(ans.size()==n){
				cout<<"cycle is not present"<<endl;
				for(auto i:ans){
					cout<<i<<" ";
				}
			}
			else{
				cout<<"Cycle is present bro";
			}
			cout<<endl;
		}
};

int main(){
	graph g;
//	g.addEdge(2,4,1);
//	g.addEdge(2,5,1);
//	g.addEdge(4,6,1);
//	g.addEdge(5,3,1);
//	g.addEdge(3,7,1);
//	g.addEdge(6,7,1);
//	g.addEdge(7,0,1);
//	g.addEdge(7,1,1);
	//topological sort using dfs
//	unordered_map<int,bool>visited;
//	stack<int>ans;
//	for(auto i:g.a_list){
//		if(!visited[i.first]){
//			g.ts_dfs(i.first,visited,ans);
//		}
//	}
//	while(!ans.empty()){
//		cout<<ans.top()<<" ";
//		ans.pop();
//	}
//	cout<<endl;
    
    //topological sort using bfs
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
	//g.addEdge(8,3,1);
    int n=9;
    g.ts_bfs(n);
    return 0;
}
