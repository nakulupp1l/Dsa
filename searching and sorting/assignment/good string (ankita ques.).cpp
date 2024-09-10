#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool single(string s){
	if(s.length()==1)
	return 1;
	else
	return 0;
}
bool equal(string s,int n){
	int count=0;
	//count 1
	for(int i=0;i<n;++i){
		if(s[i]=='1'){
			++count;
		}
	}
//	bool x=(s.length()-count)==count;
//	cout<<n<<" "<<count<<endl;
//	cout<<s<<endl;
	if((n-count)==count){
		return 1;
	}
	return 0;
}
int even(string s,string prev,int len){
	int del=0,ans=0,n=0,maj_count=0,min_count=0;
	char maj,min;
	//not equal
	if(!equal(prev,len)){
		//1.find majority
		for(int i=0;i<len;++i){
		if(prev[i]=='1'){
			++n;
	    	}	
    	}
    	if(n>len-n){
    		maj='1';
    		maj_count=n;
    		min_count=len-n;
    		min='0';
		}
		else{
			maj='0';
			maj_count=len-n;
			min_count=n;
			min='1';
		}
		//delete till equal
		int c=maj_count-min_count;
	//	cout<<prev<<"  "<<maj<<" "<<len<<" "<<c<<endl;
		while(c--){
			++ans;
			//cout<<prev[len-1]<<" .."<<(!maj)<<endl;
		    //bool x=prev[len-1]==!maj;
		//cout<<x<<" xx"<<endl;
			if(prev[len-1]==min){
				cout<<"1";
				//delete majority
				for(int i=0;i<len;++i){
					cout<<"."<<endl;
		         if(prev[i]==maj){
		        	prev[i]=!maj;
		        	cout<<prev[i]<<" .."<<endl;
		        	prev[len-1]='\0';
		        	--len;
		        	break;
	        	  }
	            }
			}
			else{
				prev[len-1]='\0';
				--len;
			}
			//cout<<prev<<endl;
        }
	}
	//equal
	if(equal(prev,len)){
		//sign palta de
		for(int i=0;i<len;++i){
			if(prev[i]==maj){
				prev[i]=min;
			}
			else{
				prev[i]=maj;
			}
	    }
	}
	for(int i=0;i<len;++i){
		//check kar kahi dubar equal na aa jayye
		if(s[i]==prev[i]){
			++del;
		}
	}
	//utni barri delete hogga
	//cout<<ans<<"  "<<del<<endl;
	ans+=del;
	return ans;
}
int odd(string s){
	string prev=s;
	char maj;
	int n=0;
	//if single
	if(prev.length()==1){
		return 1;
	}
	//else
	for(int i=0;i<prev.length();++i){
		if(prev[i]=='1'){
			++n;
		}	
    }
    if(n>prev.length()-n){
    	maj='1';
	}
	else{
		maj='0';
	}
	if(prev[prev.length()-1]==!maj){
	//swap with majority
	    for(int i=0;i<prev.length();++i){
		    if(prev[i]==maj){
		        prev[i]=!maj;
		        prev[prev.length()-1]='\0';
		        break;
	        }
	    }
	}
	else{
		prev[prev.length()-1]='\0';
	}
	//cout<<prev<<endl;
	int ans=even(s,prev,s.length()-1);
	return ans+1;
}
int cost(string s){
	if(s.length()%2==0){
		return even(s,s,s.length());
	}
	else{
		return odd(s);
	}
}
int main(){
	string s="111100";
	cout<<cost(s);
    return 0;
}
