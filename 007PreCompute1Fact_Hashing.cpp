#include<iostream>
using namespace std;

/*
Given T test case and in each tc a number n. print its
factorial for each tc % M
where M = 10^9+7

constraints 
1<=T<=10^5
1<=N<=10^5

*/

const int M=1e9+7;
const int N=1e5+10;

long long fact[N];

int main(){
    fact[0]=fact[1]=1;
    // Here i Precomputed the fact array
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i; // like 3! is (3-2)! * 3!
    }
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;

        // Time complexity -> 10^10 O(T*N)
        // long long fact=1;
        // for(int i=2;i<=n;i++){
        //     fact=(fact*i)%M;
        // }
        // cout<<fact<<endl;


// Time Complexity O(N)+O(T)
// i precomputed the fact in my fact array so directly i can acces the value of that particular number
        cout<<fact[n]<<endl;
    }
    return 0;
}