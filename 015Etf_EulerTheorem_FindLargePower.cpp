#include<iostream>
using namespace std;

const int M=1e9+7;
// b<=10^18 // if your b is much large then u find its power,
// but if you have to find power of a to ki power b to ki power c then you have to use
// euler's tutoient function 

int BinExpoIterative(int a,long long b,int m){
    int res=1;
    while(b>0){
        if(b&1){
            res=(res*1LL*a)% m;
        }
        a=(a*1LL*a)% m;
        b>>=1;
    }
    return res;
}

int main()
{
    // int a=2,b=13;
    // find -> (50 ^ 64 ^ 32) % M
    cout<<BinExpoIterative(50,BinExpoIterative(64,32,M-1), M)<<endl;

    return 0;
}