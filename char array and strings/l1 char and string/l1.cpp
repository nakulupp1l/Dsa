#include<iostream>
#include<vector>
#include<stack> 
#include<string>
using namespace std;
int main(){
	char ch[100];
//	ch="Nakul Uppal"; 
// it donot work 

    //space tak hi chalega
//    cin>>ch;
//	cout<<ch<<endl;

    	//cin.getline(ch,10,'a');
    	cin.getline(ch,50);
    	cout<<ch<<endl;
    	
    	//length of string
    	int i=0;
    	while(ch[i++]!='\0'){
		}
		cout<<i-1<<endl;
		cout<<strlen(ch)<<endl;
		
		//reverse a string
		int len=strlen(ch)-1;
		 i=0;
		while(i<len-i){
			char temp=ch[i];
			ch[i]=ch[len-i];
			ch[len-i]=temp;
			++i;
		}
		cout<<"reverse :"<<ch<<endl;
		
		//replace all spaces
		i=0;
		while(ch[i]!='\0'){
			if(ch[i]==' '){
				ch[i]='@';
			}
			i++;
		}
		cout<<"replace space with @ :"<<ch<<endl;
		
		//pallindrome
		i=0;
		bool flag=1;
		while(i<len-i){
			if(ch[i]!=ch[len-i]){
				flag=0;
			}
			i++;
		}
		(flag==1)?cout<<"yes pallindrome"<<endl:cout<<"no pallindrome"<<endl;
		
		//convert in uppercase
		 i=0;
		 while(i<=len){
		 	int convert=ch[i];
		 	if(ch[i]>=97&&ch[i]<=122){
		 		convert=convert-32;
		 		ch[i]=convert;
			 }
			 //alternate way;
			// ch[i]=ch[i]-'a'+'A';
		 	i++;
		 }
		 cout<<ch<<endl;
		 
		 //testing;
		 char c[10];
		 string str;
		 i=0;
		 c[i]='N';
		 str[i++]='N';
		 c[i]='N';
		 str[i++]='N';
		 c[i]='\0';
		 str[i++]='\0';
		 c[i]='N';
		 str[i++]='N';
		 c[i]='N';
		 str[i++]='N';
		 cout<<"char :"<<c<<endl<<"string :"<<str<<endl;
		 
		 //compare replace and erase
    return 0;
}
