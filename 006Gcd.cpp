#include<iostream>
using namespace std;

// here we find our the gcd by using long divison method 
// divide until your reminder not becomes zero and if your remainde is non zero at some point
// the you make diviosor to divident and remainder to divisor.


int gcd(int a,int b){
    if(b==0) return a; // base case

    return gcd(b,a%b); // recursive case
    
}

int main(){
    cout<<gcd(4,12)<<endl;
    cout<<gcd(18,12)<<endl;
    return 0;
}