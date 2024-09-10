#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;
void disp(){
	int i,n;
	cout<<"enter n:";
	cin>>n;
	for(i=0;i<n;++i){
		cout<<"NAKUL"<<endl;
	}
}
int sum(int x,int y){//function declaration
	return x+y;
}
int max(int,int,int);
void count(int n){
	int i=0;
	for(;i<n;++i){
		cout<<i+1<<endl;
	}
}
char grade(int x){//x is parameter
	char g;
	if(x>=90)
	{
		g='A';
	}
	else if(x>=80){
		g='B';
	}
	else if(x>=70){
		g='C';
	}
	else if(x>=60){
		g='D';
	}
	else
	{
		g='E';
	}
	
	switch(x/10){
		case 10:
        case 9:
        	g='A';
        break;	
        case 8:
        	g='B';
        break;
        case 7:
        	g='C';
        break;
        case 6:
        	g='D';
        break;
        default :
        	g='E';
	}
	return g;
}
int sum_even(int n){
	int i=2,sum=0;
	for(;i<=n;i=i+2){
		sum+=i;
	}
	return sum;
}
float carea(int r){
	return 3.14*r*r;
}
void evodd(int n){
	if(n==0){
		cout<<"neither odd nor even"<<endl;
	}
	else if(n%2==0){
		cout<<"EVEN"<<endl;
	}
	else{
		cout<<"ODD"<<endl;
	}
}
int fact(int n){
	assert(n>0);
	int i=2,f=1;
	for(;i<=n;++i){
		f=f*i;
	}
	if(n==0)
	f=1;
	return f;
}
void prime(int n){
	int i=2,x=1;
	for(;i<n;++i){
		if(n%i==0){
			x=0;
			break;
		}
	}
	if(x==1){
		cout<<"it is a prime no."<<endl;
	}
	else{
		cout<<"it is not a prime no."<<endl;
	}
}
void pprime(int n){
	int i,j,x;
	for(i=2;i<=n;++i){
		x=1;
	
	for(j=2;j<i;++j){
		if(i%j==0){
			x=0;
			break;
		}
	}
		if(x==1)
		cout<<i<<endl;	
}
}
int rev(int x){
	int ans=0,n;
	while(x>0){
		n=x%10;
		ans=ans*10+n;
		x=x/10;
	}
	return ans;
}
int kbit(int n,int k){
	int x=1<<k;
	return(x|n);
}





class Sol{
	public:
	vector<double> temp(double c){
	double k,f;
	k=c+273.5;
	f=c*1.8+32;
	vector<double>v;
	v.push_back(k);
	v.push_back(f);
	return v;
}
};
int main(){
	Sol ob;
	ob.temp(10);

	//disp();//it is s function call 
	float f;
    int a,b,c;
//	cout<<"enter no."<<endl;
//	cin>>a;
//	cin>>b;
//	cout<<"sum is "<<sum(a,b);
	
//	cin>>a>>b>>c;
//	cout<<"max is "<<max(a,b,c);

//cin>>a;
//count(a);

	//cin>>a;
	//cout<<"your grade is "<<grade(a);
	//a is argument
	
//	cin>>a;
//	cout<<sum_even(a);

     //area of circle
     //cin>>a;
     //cout<<"area of circle : "<<carea(a)<<endl;
     
     //odd or even
    // evodd(a);
     
     //factorial
  //  cout<<"factorial of "<<a<<" is "<<fact(a)<<endl;
	
	//prime no.
//	prime(a);
	
	//to print only prime no.
//	pprime(a);
	
	//reverse an integer
	//cin>>a;
	//cout<<rev(a)<<endl;
	
	//set the kth bit
//	cin>>a>>b;
//	cout<<kbit(a,b)<<endl;

    //temperature conversion
    cin>>a;
	return 0;
}

int max(int x,int y,int z){
	return (x>y)?((x>z)?x:z):(y>z)?y:z;
}
