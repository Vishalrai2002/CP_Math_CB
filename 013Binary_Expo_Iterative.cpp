#include<bits/stdc++.h>
using namespace std;

const int M=1e+7;

int BinExpoIterative(int a,int b){
    int res=1;
    // check notes for dry run
    while (b>0) // run loop b times
    {
        if(b&1){ // if the right last bit is setbit(means-1) then a ki curent power multiply by res
            res=(res*1LL*a)%M; 
        }
    a=(a*1LL*a)%M;
    b>>=1; // right shift the bits. like if your bit is 1101 then after (>>=1) ->110
    }
    return res;
    
}

int main()
{
    int a=2,b=13;
    cout<<BinExpoIterative(a,b)<<endl;

    return 0;
}