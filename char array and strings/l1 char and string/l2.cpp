#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
bool cc(string part,int i,int j){
//	string part=st.substring(s,e);
	//int i=0,j=part.length()-1;
	while(i<j){
		if(part[i]!=part[j]){
			return 0;
		}
		++i;
		--j;
	}
	return 1;
}
bool pallindrome(string s){
	int i=0,j=s.length()-1;
	while(i<j){
		if(s[i]!=s[j]){
			return cc(s,i+1,j)||cc(s,i,j-1);
		}
		i++;
		j--;
	}
	return 1;
}


//
int expand(string s,int i,int j){
	int count=0;
	while(i>=0 && j<s.length() && s[i]==s[j]){
		count ++;
		i--;
		j++;
	}
	return count;
}
int main(){
	//adjacent character deletion
//	string str="abbaca";
//	 int i=0,j=0;
//	 string ans;
//	 while(i<str.length()){
//	 	if(ans.length()-1>=0 && ans[ans.length()-1]==str[i]){
//	 		ans.pop_back();
//		 else{
//		 	ans.push_back(str[i]);
//		 }
//		 i++;
//	 }
//	cout<<ans<<endl;

    //remove occcurance of substring
//    string s="daabcbaabcbc",part="abc";
//     int pos=s.find(part);
//     while(pos!=string::npos){
//     	s.erase(pos,part.length());S
//     	pos=s.find(part);
//	 }
//	cout<<s<<endl;

    //valid pallindrome 2
   // cout<<pallindrome("abbg");
   
   //min time diffference
//   vector<string> str={"23:59","00:00"
//   };
//   int hr,mint;
//   vector<int>minute;
//   for(int i=0;i<str.size();++i){
//   	hr=stoi(str[i].substr(0,2));
//   	mint=stoi(str[i].substr(3,2));
//   	minute.push_back(60*hr+mint);
//   }
//   //sort for adjacent comparing
//   sort(minute.begin(),minute.end());
//   int min=INT_MAX;
//   for(int i=1;i<minute.size();++i){
//   	int diff=minute[i]-minute[i-1];
//   	min=(min>diff)?diff:min;
//   }
//   int last=minute[0]+1440-minute[minute.size()-1];
//   min=(min>last)?last:min;
//   cout<<min;
   
    //Pallindrome strings
    string s="aaa";
    int count =0;
    int n=s.length();
    for(int i=0;i<n;++i){
    	//odd
    	int odd=expand(s,i,i);
    	count+=odd;
    	//even
    	int even=expand(s,i,i+1);
    	count+=even;
	}
	cout<<count<<endl;
    return 0;
}
