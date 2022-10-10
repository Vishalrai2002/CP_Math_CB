#include<iostream>
using namespace std;
// There is some problme in the below code

// in this code we discuss if range of a and M are big then how can we handle this?

// const int M=1e18+7;
const long long int M=1e18+7;

// if your M is like 10^18 then you can't direct multiply so you must have to binMultip function
int BinMultiply(long long a,long long b){
    int res=0; // because we add here
    while(b>0){
        if(b&1){
            res=(res+a)%M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return res;
}

// Time Complexity-> O(Log2 N)
int BinExpoIter(long long a,long long b){
    // a%=M; // if your a 10^18 range
    int res=1;
    while (b>0)
    {
        if(b&1){
            // res=(res*1LL*a)%M;
            res=BinMultiply(a,a);
        }
        // a=(a*1LL*a)%M;
        a=BinMultiply(a,a);
        b>>=1;
    }
    
    return res;
}


int main()
{
    int a=2,b=13;
    cout<<BinExpoIter(a,b)<<endl;

    return 0;
}