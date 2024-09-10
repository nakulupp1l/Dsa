#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    static bool cmp(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector <string> snum;
        for(auto n:nums){
           snum.push_back(to_string(n));
        }
        sort(snum.begin(),snum.end(),cmp);
        string ans="";
        if(snum[0]=='0'){
            return "0";
        }
        for(auto x:snum){
            ans+=x;
        }
        return ans;
    }
};
int main(){
    return 0;
}
