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
		
		void dfs(int src,vector<bool>&visited,unordered_map<int,list<pair<int,int>>>&new_list){
			visited[src]=true;
				cout<<src<<" ";
			for(auto i:new_list[src]){
				if(!visited[i.first]){
				  dfs(i.first,visited,new_list);
				}
			}
		} 
		
		void ssc(int n){
			stack<int>ans;
			vector<bool>visited(n,0);
			int src=0;
			
			//step 1
			topological_sort(src,visited,ans);
//			while(!ans.empty()){
//				cout<<ans.top()<<" ";
//				ans.pop();
//			}

            //step 2
            unordered_map<int,list<pair<int,int>>>new_list;
            for(auto i:a_list){
            	int v=i.first;
            	for(auto j:i.second){
            		int u=j.first;
            		int wt=j.second;
            		new_list[u].push_back({v,wt});
				}
			}
			
			//step 3
			int count =0;
			vector<bool>visited2(n,0);
			while(!ans.empty()){
				int node=ans.top();
				ans.pop();
				if(!visited2[node]){
					cout<<"for "<<count+1<<" : ";
					dfs(node,visited2,new_list);
					cout<<endl;
					count++;
				}
			}
			cout<<count;
		}
		
		void bridge(int src,int parent,int &timer,vector<int>&tin,vector<int>&low,unordered_map<int,bool>& visited){
			visited[src]=true;
			low[src]=timer;
			tin[src]=timer;
			timer++;
			for(auto i:a_list[src]){
				int neighbour=i.first;
				if(neighbour==parent) continue;
				
				if(!visited[neighbour]){
					bridge(neighbour,src,timer,tin,low,visited);
					low[src]=min(low[src],low[neighbour]);
					if(low[neighbour]>tin[src]){
						cout<<neighbour<<" --> "<<src<<" is a bridge."<<endl;
					}
				}
				else{
					low[src]=min(low[src],low[neighbour]);
				}
			}
		}
};

int main(){
	graph g;
//	g.addEdge(0,1,1,1);
//	g.addEdge(1,2,1,1);
//	g.addEdge(2,3,1,1);
//	g.addEdge(3,0,1,1);
//	g.addEdge(2,4,1,1);
//	g.addEdge(4,5,1,1);
//	g.addEdge(5,6,1,1);
//	g.addEdge(6,4,1,1);
//	g.addEdge(6,7,1,1);
//	g.ssc(8);
    g.addEdge(0,1,0,0);
    g.addEdge(0,2,0,0);
    g.addEdge(2,1,0,0);
    g.addEdge(1,6,0,0);
    g.addEdge(1,4,0,0);
    g.addEdge(3,1,0,0);
    g.addEdge(3,5,0,0);
    g.addEdge(4,5,0,0);
    int n=7,timer=1 ;
    vector<int>tin(n);
	vector<int>low(n);
	unordered_map<int,bool>visited;
    g.bridge(0,-1,timer,tin,low,visited);
    return 0;
}
