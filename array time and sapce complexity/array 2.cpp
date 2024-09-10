#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int>v){
	int ans=0,i;
	for(i=0;i<v.size();++i){
		ans=ans^v[i];
	}
	return ans;
}
void unionc(vector<int>x,vector<int>y){
	int i;
	vector<int>ans;
	for(i=0;i<x.size();++i){
		ans.push_back(x[i]);
	}
	for(i=0;i<y.size();++i){
		ans.push_back(y[i]);
	}
	for(i=0;i<ans.size();++i){
		cout<<ans[i]<<" ";
	}
}
void inter(vector<int>x,vector<int>y){
	int i,j;
	vector<int>ans;
	for(i=0;i<x.size();++i){
		for(j=0;j<y.size();++j){
			if(x[i]==y[j]){
				y[j]=INT_MIN;
				ans.push_back(x[i]);
				//break;
				
			}
		}
	}
	for(i=0;i<ans.size();++i){
		if(ans[i]!=INT_MIN)
		cout<<ans[i]<<" ";
	}
//    for(auto value: ans){
//    	cout<<value<<" ";
//	}
}

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}


int main(){
	
//int j;
	//vector basics
//	int i;
//	 vector<int>v(5,1);
// 	 for(i=0;i<v.size();++i){
//	 	cout<<v[i]<<" ";
//	 }
//	 cout<<endl;
//	 v.push_back(5);
//	 for(i=0;i<v.size();++i){
//	 	cout<<v[i]<<" ";
//	 }
//	 cout<<endl;
//	 v.pop_back();
//	 for(i=0;i<v.size();++i){
//	 	cout<<v[i]<<" ";
//	 } 
//	 vector<int>u;
//	 vector<char>c(5);
//	 cout<<endl<<u.empty()<<" "<<c.empty()<<endl;

//   dont know why not working
//	 vector<int> a{1,2,3,4,5};

     //find unique element
//     int n,i,count,j;
//     cout<<"enter no. of elements:";
//     cin>>n;
//	 vector<int>v(n);
//	 for(i=0;i<n;++i){
//	 	cin>>v[i];
//	 }
//	 for(i=0;i<n;++i){
//	 	count=-1;
//	 	for(j=0;j<n;++j){
//	 		if(v[i]==v[j])
//	 		  ++count;
//		 }
//		 if(count==0)
//		 cout<<v[i]<<" ";
//	 }
      
      //by sir
//      int n,i;
//      cin>>n;
//      vector<int>v(n);
//	 for(i=0;i<v.size();++i){
//	 	cin>>v[i]; 
//	 }
//	 int x=unique(v);
//	 cout<<"unique element is "<<x;
    
    
    //union and intersection of 2 array
//     int i,n,m;
//     cout<<"enter size of both arrays :";
//     cin>>n>>m;
//     vector<int>a(n);
//     vector<int>b(m);
//     for(i=0;i<a.size();++i){
//		cin>>a[i];
//	}
//	cout<<"enter 2 nd vector"<<endl;
//     for(i=0;i<b.size();++i){
//		cin>>b[i];
//	}
//     unionc(a,b);
//     cout<<endl;   
    //inter(a,b);

//union cancelling duplicate elements
//    vector<int>ans;
//	for(i=0;i<a.size();++i){
//		for(j=0;j<b.size();++j){
//			if(a[i]==b[j]){
//				b[j]=INT_MIN;
//			}
//		}
//	}
//	for(i=0;i<a.size();++i){
//		if(a[i]!=INT_MIN)
//		ans.push_back(a[i]);
//	}
//	for(i=0;i<b.size();++i){
//		if(b[i]!=INT_MIN)
//		ans.push_back(b[i]);
//	}
//	
//	for(i=0;i<ans.size();++i){
//		cout<<ans[i]<<" ";
//	}

   //pair sum
//        int i,n,sum;
//    cout<<"enter size of array :";
//    cin>>n;
//     vector<int>a(n);
//     for(i=0;i<a.size();++i){
//		cin>>a[i];
//	}
//	cout<<"enter sum ";
//	cin>>sum; 
//    for(i=0;i<a.size();++i){
//    	for(j=i+1;j<a.size();++j){
//    		if((a[i]+a[j])==sum){
//    			cout<<a[i]<<"+"<<a[j]<<"="<<sum<<endl;
//			}
//		}
//	}


	//triplet sum
//	   int i,j,k,n,sum;
//    cout<<"enter size of array :";
//    cin>>n;
//     vector<int>a(n);
//     for(i=0;i<a.size();++i){
//		cin>>a[i];
//	}
//	cout<<"enter sum ";
//	cin>>sum; 
//    for(i=0;i<a.size();++i){
//    	for(j=i+1;j<a.size();++j){
//    		for(k=j+1;k<a.size();++k){
//    			if((a[i]+a[j]+a[k])==sum){
//    			cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<"="<<sum<<endl;
//			}
//			}
//		}
//	}
	
	
	//quadrac sum
//	   int i,j,k,n,sum;
//    cout<<"enter size of array :";
//    cin>>n;
//     vector<int>a(n);
//     for(i=0;i<a.size();++i){
//		cin>>a[i];
//	}
//	cout<<"enter sum ";
//	cin>>sum; 
//    for(i=0;i<a.size();++i){
//    	for(j=i+1;j<a.size();++j){
//    		for(k=j+1;k<a.size();++k){
//    			for(int l=k+1;l<a.size();++l){
//    				
//    			if((a[i]+a[j]+a[k]+a[l])==sum){
//    			cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<"+"<<a[l]<<"="<<sum<<endl;
//				}
//			}
//			}
//		}
//	}
	
	//sort 0 and 1
//	int n;
//	cout<<"enter size of array :";
//    cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<a.size();++i){
//		cin>>a[i];
//	}
//	int s=0,e=a.size()-1,x=0;
//	while(s<e){
//    	cout<<"while working";
//    	if(a[x]==0){
//    		cout<<"a at 0 if"<<endl;
//    		swap(a[x],a[s]);
//    		s++;
//    		x++;
//		}
//		if(a[x]==1){
//			cout<<"a at 1 if"<<endl;
//			swap(a[x],a[e]);
//			e--;
//		}
//	}
//	for(int i=0;i<a.size();++i){
//		cout<<a[i]<<" ";
//	}
	
	//left rotating an array;
	int n,k,x=0;
	cout<<"enter size of array :";
    cin>>n;
     vector<int>a(n);
     for(int i=0;i<a.size();++i){
		cin>>a[i];
	}
	cout<<"enter index from where you wnat to rotate";
	cin>>k;
	for(int i=0;i<k;++i){
		int temp=a[0];
		for(int j=0;j<a.size()-1;++j){
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	for(int i=0;i<a.size();++i){
		cout<<a[i]<<" ";
	}
	return 0;
}
