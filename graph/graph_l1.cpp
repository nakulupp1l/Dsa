#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
#include<list>
#include<queue>

using namespace std;

//
//class WGraph {
//	public:
//		unordered_map<int,list<pair<int,int>>>a_list;
//		void add_edge(int u,int v,int val, bool dir) {
//			a_list[u].push_back({v,val});
//			if(!dir) {
//				a_list[v].push_back({u,val});
//			}
//		}
//		void print() {
//			for(auto node:a_list) {
//				cout<<node.first<<"--->";
//				for(auto neighbour:node.second) {
//					cout<<"("<<neighbour.first<<","<<neighbour.second<<")"<<"  ";
//				}
//				cout<<endl;
//			}
//		}
//};
//void WList() {
//	int n=0;
//	cout<<"Enter number of vertexes :";
//	cin>>n;
//
//	int e=0;
//	cout<<"Enter number of edges :";
//	cin>>e;
//	WGraph g;
//	while(e--) {
//		int u,v,w,d;
//		g.add_edge(u,v,w,d);
//	}
//	g.print();
//}

void Adjacency() {

			int n=0;
			cout<<"Enter number of vertexes :";
			cin>>n;
			vector<vector<int>>adj(n,vector<int>(n,0));
			int edges=0;
			cout<<"enter number of edges :";
			cin>>edges;
			while(edges--) {
				int u,v;
				cin>>u>>v;
				adj[u][v]=1;
			}
			//print(adj);
		}
		

template<typename T>
class Graph {
	public:
		unordered_map<T,list<T>>a_list;
		Graph(){
			List();
		}
		void add_edge(T u,T v, bool dir) {
			a_list[u].push_back(v);
			if(!dir) {
				a_list[v].push_back(u);
			}
		}
		
		void print() {
			for(auto node:a_list) {
				cout<<node.first<<"--->";
				for(auto neighbour:node.second) {
					cout<<neighbour<<" ";
				}
				cout<<endl;
			}
		}
		
		void List() {
			int n=0;
			cout<<"Enter number of vertexes :";
			cin>>n;

			int e=0;
			cout<<"Enter number of edges :";
			cin>>e;
			//Graph<int> g;
			while(e--) {
				T u,v;
				int d;
				cin>>u>>v>>d;
				add_edge(u,v,d);
			}
			print();
		}
		
		void BFS(T src) {
			queue<T>q;
			unordered_map<T,bool>visited;
			q.push(src);
			visited[src]=1;
			cout<<"BFS: ";
			while(!q.empty()){
				T top=q.front();
				q.pop();
				cout<<top<<" ";
				for(auto i:a_list[top]){
					if(visited[i])continue;
					q.push(i);
					visited[i]=1;
				}
			}
		}
		
		void DFS(T src){
			stack<T>st;
			unordered_map<T,bool>visited;
			st.push(src);
			visited[src]=1;
			cout<<"DFS: ";
			while(!st.empty()){
				T f=st.top();
				st.pop();
				cout<<f<<" ";
				for(auto i:a_list[f]){
					if(!visited[i]){
						st.push(i);
						visited[i]=1;
					}
				}
			}
		}

};

int main() {
	//Adjacency();
	//List();
	//WList();
	Graph<int>g;
	cout<<endl;
	g.BFS(0);
	//for disconnected graph
	/*
    int n= number of nodes
    unordered_map<int,bool>visited;
    for(int i=0;i<n;++i){
    if(visited[i]) continue;
    bfs(i,visited);
	}
	*/
	cout<<endl;
	g.DFS(0);
	//same dfs can be done for disconnected graph
	return 0;
}
