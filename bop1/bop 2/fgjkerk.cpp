#include <bits/stdc++.h> 
#include <iostream>
#include<math.h>
using namespace std;

    //Write your countBits function here

int main() {
     int n ,x=1,count=0;
    cin >> n;
    while(n>0){
        if((n%(pow(2,x)))==1){
     ++count;
     ++x;
    n= n/pow(2,x);
    }
    cout<<count;
    }
    return 0;
}
