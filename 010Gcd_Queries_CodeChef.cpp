/*

Problem Link -> https://www.codechef.com/problems/GCDQ

You are given an array A of integers of size N. You will be given Q queries where each query 
is represented by two integers L, R. You have to find the gcd(Greatest Common Divisor) 
of the array after excluding the part from range L to R inclusive (1 Based indexing).
You are guaranteed that after excluding the part of the array remaining array is non empty.

*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // for fast input output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // you have to find the gcd of 1 to l-1 and r+1 to n

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+10];
        int forward[n+10]; // make a forward
        int backward[n+10]; // make a backward
        forward[0]=backward[n+1]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        // computed the forward 
        // Check notes
        for(int i=1;i<=n;i++){
            forward[i]=__gcd(forward[i-1],arr[i]);
        }
        // computed the backward
        // check notes
        for(int i=n;i>=1;i--){
            backward[i]=__gcd(backward[i+1],arr[i]);
        }
        // Time Complexity -> O(T * (N+Q*N))=O(T*N+T*N*Q)  Gives-> TLE
        // we can ignore T because->Sum of N over all the test cases will be less than or equal to 106.
        while(q--){
            int l,r;
            cin>>l>>r;
            // int gc=0;
            // Computed from 1 to l-1
            // for(int i=1;i<=l-1;i++){
            //     gc=__gcd(gc,arr[i]);
            // }
            // computed form r+1 to n
            // for(int j=r+1;j<=n;j++){
            //     gc=__gcd(gc,arr[j]);
            // }
            // cout<<gc<<endl;

            // computed direct till 1 to l-1 and r+1 to n
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        }
    }  

    return 0;
}