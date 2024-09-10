 #include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<set>
using namespace std;
    int findPairs(vector<int>& v, int k) {
        int i=0,j=1;
        set<pair<int,int>>ans;
	sort(v.begin(),v.end());
	while(j<v.size()){
	     if(v[j]-v[i]==k &&i!=j){
             ans.insert({v[i],v[j]});
			i++,j++;
		}
		else if(v[j]-v[i]>k){
			i++;
		}
		else{
			j++;
		}
		
	}
	return ans.size();
    }
int main(){
	vector<int>v={1,1,1,2,2};
	int k=1;
	cout<<findPairs(v,k);
    return 0;}