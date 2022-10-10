#include<bits/stdc++.h>
using namespace std;

const int M=1e+7;

// Recursive Binary exponenation
int BinExpoRecur(int a,int b){
    if(b==0){ // base case
        return 1;
    }

    int res=BinExpoRecur(a,b/2); // you save the recur calls

    if(b&1){ // check b is odd
// return a*BinExpoRecur(a,b/2)*BinExpoRecur(a,b/2); // here you can find the rec again and again so you just save it in some integrs
        return (a*(res*1LL*res)%M)%M; // here your res*res = 10^9*10^9 so use 1LL here
    }
    // return BinExpoRecur(a,b/2)*BinExpoRecur(a,b/2);
    return (res*1LL*res)%M;
}

int main(){
    // Here below i have to find the 2^3 
    int a=2,b=3;
    int ans=1;
    // Time Complexity -> O(N)
    for(int i=0;i<b;i++){ // run loop b times
        ans*=a; // update your ans
        ans%=M;
    }
    cout<<ans<<endl;
    cout<<BinExpoRecur(2,3)<<endl;
    return 0;
}