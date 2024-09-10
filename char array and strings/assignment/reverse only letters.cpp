#include<iostream>
#include<vector>
#include<stack>
//#include<string.h>
using namespace std;
void swap(char &a,char &b){
        char temp=a;
        a=b;
        b=temp;
    }
bool check(char c){
    int ascii=c;
    if((ascii>=97 && ascii<=122) ||(ascii>=65 && ascii<=90))
        return 1;
    else
        return 0;}
string reverseOnlyLetters(string s) {
    int i=0,j=s.length()-1;
    while(i<j){
    if(isalpha(s[i]) && isalpha(s[j])){
        swap(s[i],s[j]);
        i++;
        j--;}
    else{
        if(!isalpha(s[i])&&!isalpha(s[j])){
            i++;
            j--;
        }
        else{
            if(!isalpha(s[i])){
                i++;}
            else{
                j--;}
        }
     }
    }
        return s;}
int main(){
	string s="nakul uppal";
	cout<<reverseOnlyLetters(s)<<endl;
    return 0;
}
