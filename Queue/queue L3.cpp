#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void non_repeating(string &s){
	vector<int>fr(26,0);
        for(int i=0;i<s.size();++i){
            fr[s[i]-'a']++;
        }
        for(int i=0;i<s.size();++i){
        	if(fr[s[i]-'a']==1){
        		s[i]='#';
        		return;
			}
		}
}
//by sir using queue
string non_repeating_sir(string s){
	vector<int>fr(26,0);
	queue<char>q;
	string ans;
    for(int i=0;i<s.size();++i){
    	fr[s[i]-'a']++;
    	q.push(s[i]);
    	while(!q.empty()){
    		if(fr[q.front()-'a']!=1){
    			q.pop();
			}
			else break;
		}
		if(q.empty()) ans.push_back('#');
		else ans.push_back(q.front());
	}
	return ans;
}
int main(){
	//non repeating
//	string s="kbvkjsdbcfiwekasdsjhcbsjk";
//	non_repeating(s);
//	//s[1]='a';
//	cout<<s<<endl;
     cout<<non_repeating_sir("zarcaazrd");
    //Q2.
    return 0;
}
