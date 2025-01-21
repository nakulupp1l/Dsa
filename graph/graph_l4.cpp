#include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<unordered_map>
#include<queue>
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
					cout<<j.first<<","<<j.second<<"  ";
				}
				cout<<endl;
			}
			cout<<endl;
		}	
		
		void shortestPathBfs(int src,int dest){
			queue<int>q;
			unordered_map<int,bool>visited;
			unordered_map<int,int>parent;
			q.push(src);
			visited[src]=1;
			parent[src]=-1;
			while(!q.empty()){
				int fr=q.front();
				q.pop();
				for(auto i:a_list[fr]){
					if(!visited[i.first]){
						q.push(i.first);
						visited[i.first]=1;
						parent[i.first]=fr;
					}
				}
			}
			stack<int>st;
			st.push(dest);
			while(st.top()!=src){
				st.push(parent[st.top()]);
			}
			while(!st.empty()){
				cout<<st.top()<<" ";
				st.pop();
			}
		}
};

int main(){
	graph g;
	g.addEdge(0,1,1,0);
	g.addEdge(0,2,1,0);
	g.addEdge(0,3,1,0);
	g.addEdge(1,4,1,0);
	g.addEdge(2,5,1,0);
	g.addEdge(3,6,1,0);
	g.addEdge(4,5,1,0);
	g.addEdge(6,5,1,0);
	g.print();
	
	int src=0,dest=5;
	g.shortestPathBfs(src,dest);
    return 0;
}
