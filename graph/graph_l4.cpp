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
		
		//using topological sort
		void ts_dfs(int src,unordered_map<int,bool>&visited,stack<int>&ans){
            visited[src]=1;
			for(auto i:a_list[src]){
        		if(!visited[i.first]){
        			ts_dfs(i.first,visited,ans);
				}
			}
			ans.push(src);
		}
		void shortestPathDfs(int des,stack<int>&st){
			int n=st.size();
			vector<int>distance(n,INT_MAX);
			int src=st.top();
			distance[src]=0;
			while(!st.empty()){
				int f=st.top();
				st.pop();
				//why the condition is put 
				//a basic reason
				if(distance[f]!=INT_MAX){
					for(auto i:a_list[f]){
					int neighbour=i.first;
					distance[neighbour]=min(distance[neighbour],distance[f]+i.second);
				    }
				}
			}
			cout<<distance[des]<<endl;
		}
		
		//dijkstra algorithm
		void djustra(int src,int n){
			vector<int>distance(n,INT_MAX);
			set<pair<int,int>>st;
			distance[src]=0;
			st.insert({distance[src],src});
			while(!st.empty()){
				auto x=*(st.begin());
				int node=x.second;
				int d=x.first;
				st.erase(st.begin());
				for(auto i:a_list[node]){
					int neighbour=i.first;
					int n_dist=i.second;
					if(distance[neighbour]>=d+n_dist){
						auto prev=st.find({n_dist,distance[neighbour]});
						if(prev!=st.end()){
							st.erase(prev);
						}
						distance[neighbour]=d+n_dist;
						st.insert({distance[neighbour],neighbour});
					}
				}
			}
			int c=0;
			for(auto i:distance){
				if(i!=INT_MAX)
				cout<<c<<"->"<<i<<endl;
				else
				cout<<c<<"->"<<"INFINITY"<<endl;
				c++;
			}
		}
};

int main(){
//	graph g;
//	g.addEdge(0,1,1,0);
//	g.addEdge(0,2,1,0);
//	g.addEdge(0,3,1,0);
//	g.addEdge(1,4,1,0);
//	g.addEdge(2,5,1,0);
//	g.addEdge(3,6,1,0);
//	g.addEdge(4,5,1,0);
//	g.addEdge(6,5,1,0);
//	g.print();
//	int src=0,dest=5;
//	g.shortestPathBfs(src,dest);

//    graph g1;
//    g1.addEdge(0,1,5,1);
//    g1.addEdge(0,2,3,1);
//    g1.addEdge(1,3,3,1);
//    g1.addEdge(2,1,2,1);
//    g1.addEdge(2,3,5,1);
//    g1.addEdge(2,4,6,1);
//    g1.addEdge(4,3,1,1);
//    g1.print();
//    int src=0,des=3;
//    stack<int>st;
//    unordered_map<int,bool>visited;
//    g1.ts_dfs(src,visited,st);
//    g1.shortestPathDfs(des,st);

    graph g2;
    g2.addEdge(1,2,7,0);
    g2.addEdge(1,3,9,0);
    g2.addEdge(1,6,14,0);
    g2.addEdge(6,3,2,0);
    g2.addEdge(3,4,11,0);
    g2.addEdge(3,2,10,0);
    g2.addEdge(2,4,15,0);
    g2.addEdge(4,5,6,0);
    g2.addEdge(5,6,9,0);
    g2.print();
    g2.djustra(6,7);
    return 0;
}
