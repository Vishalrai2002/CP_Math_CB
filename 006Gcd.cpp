#include<iostream>
#include<algorithm>
using namespace std;

// here we find our the gcd by using long divison method 
// divide until your reminder not becomes zero and if your remainde is non zero at some point
// the you make diviosor to divident and remainder to divisor.


// Time complexity log(N)

int gcd(int a,int b){
    if(b==0) return a; // base case

    return gcd(b,a%b); // recursive case

}

int main(){

    // gcd
    cout<<gcd(4,12)<<endl;
    cout<<gcd(18,12)<<endl;
    // we can find out the LCM by the help of relatoinship between the gcd and lcm
    // a*b/gcd=lcm

    // lcm 
    cout<<18*12/gcd(18,12)<<endl;


    // cout<<__gcd(4,12)<<endl; // Time COmplexity is LOG(N)
    // __gcd(a,__gcd(b,c));
    return 0;
}