#include<iostream>
#include<vector>
#include<stack>
using namespace std;
 void swap(char &a,char &b){
        char temp=a;
        a=b;
        b=temp;
    }
    bool check(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return 1;
        }
        else{
            return 0;
        }
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            if(check(s[i]) &&check(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else{
                if(!check(s[i]) &&!check(s[j])){
                    i++;
                    j--;
                }
                else{
                    if(!check(s[i])){
                        i++;
                    }
                    else{
                        j--;
                    }
                }
            }
        }
        return s;
    }
int main(){
	string s="nakul uppal";
	cout<<reverseVowels(s)<<endl;
    return 0;
}
