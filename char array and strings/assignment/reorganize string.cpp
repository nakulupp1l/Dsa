#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	string s="aba";
//	int hash[26];
//	for(int i=0;i<s.length();++i){
//		hash[s[i]-'a']++;
//	}
//	int fre=INT_MIN;
//	char ch;
//	for(int i=0;i<26;++i){
//		if(hash[i]>fre){
//			fre=hash[i];
//			ch=i+'a';
//		}
//	}
//	int ind=0;
//	while(ind<s.length() && fre>0){
//		s[ind]=ch;
//		fre--;
//		ind+=2;
//	}
//	if(fre!=0){
//		cout<<"fuck u bitch"<<endl;
//	}
//	else{
//		hash[ch-'a']=0;
//		for(int i=0;i<26;++i){
//			while(hash[i]>0){
//				ind=(ind>=s.length())?1:ind;
//				s[ind]=i+'a';
//				hash[i]--;
//				ind+=2;
//			}
//		}
//		cout<<s<<endl;
//	}

//pata nhi kyu nhi chal raha bc
        int hash[26];
        for(int i=0;i<s.size();++i){
            hash[s[i]-'a']++;
        }
        char most_fre;
        int max_occ=INT_MIN;
        for(int i=0;i<26;++i){
            if(hash[i]>max_occ){
                max_occ=hash[i];
                most_fre=i+'a';
            }
        }
        int ind=0;
        while(max_occ>0 && ind<s.size()){
            s[ind]=most_fre;
            max_occ--;
            ind+=2;
        }
        if(max_occ!=0){
            cout<<"";
        }
        {
        	hash[most_fre-'a']=0;
        for(int i=0;i<26;++i){
            while(hash[i]>0){
                ind=(ind>=s.size())?1:ind;
                s[ind]=i+'a';
                hash[i]--;
                ind+=2;
            }
        }
        cout<<s;
		}
    return 0;
}
