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
		void bellman_ford(int src,int n){
			vector<int>distance(n,INT_MAX);
			distance[src]=0;
			for(int i=0;i<n-1;++i){
				for(auto node:a_list){
					for(auto neighbour:node.second){
						int u=node.first;
						int v=neighbour.first;
						int weight=neighbour.second;
						if(distance[u]!=INT_MAX &&distance[u]+weight<distance[v]){
							distance[v]=weight+distance[u];
						}
					}
				}
			}
			int count=0;
			for(auto i:distance){
				cout<<count++<<"  "<<i<<endl;
			}
			bool neg=0;
			for(auto node:a_list){
				for(auto neighbour:node.second){
					int u=node.first;
					int v=neighbour.first;
					int weight=neighbour.second;
					if(distance[u]!=INT_MAX &&distance[u]+weight<distance[v]){
		     			//distance[v]=weight+distance[u];
		     			neg=1;
		     			break;
					}
				}
			}
			(neg)?cout<<"Negetive cycle present":cout<<"Negetive cycle not present";
			cout<<endl;
		}
		
		void warshall(int n){
			vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
			for(int i=0;i<n;++i){
				dist[i][i]=0;
			}
			for(auto i:a_list){
				for(auto j:i.second){
					int u=i.first;
					int v=j.first;
					int wt=j.second;
					dist[u][v]=wt;
				}
			}
			
			for(int helper=0;helper<n;++helper){
				for(int u=0;u<n;++u){
					for(int v=0;v<n;++v){
						if(dist[u][helper]!=INT_MAX &&dist[helper][v]!=INT_MAX){
							dist[u][v]=min(dist[u][v],dist[u][helper]+dist[helper][v]);
						}
					}
				}
			}
			for(auto i:dist){
				for(auto j:i){
					cout<<j<<" ";
				}
				cout<<endl;
			}
		}
};

int main(){
	graph g;
//	g.addEdge(0,1,-1,1);
//	g.addEdge(0,2,4,1);
//	g.addEdge(1,2,3,1);
//	g.addEdge(1,3,2,1);
//	g.addEdge(1,4,2,1);
//	g.addEdge(3,1,1,1);
//	g.addEdge(3,2,5,1);
//	g.addEdge(4,3,-3,1);
//    g.addEdge(0,1,-2,1);
//    g.addEdge(1,2,-3,1);
//    g.addEdge(2,0,-4,1);
//	g.print();
//	int n=3,src=0;
//	g.bellman_ford(src,n);

    g.addEdge(0,1,3,1);
    g.addEdge(0,3,5,1);
    g.addEdge(1,0,2,1);
    g.addEdge(1,3,4,1);
    g.addEdge(2,1,1,1);
    g.addEdge(3,2,1,1);
    int n=4;
    g.warshall(n);
    return 0;
}
