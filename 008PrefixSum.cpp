/*
Given array a of n integers. Given Q queries and in each
query given L and R print sum of array elements from index L to R 
(L, R included)

constraints
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L, R<=N

*/

#include<iostream>
using namespace std;

const int N=1e5+10;
int a[N];
int pf[N]; // prfix array declared

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        // below i filled my prefix array and pf[i] store the sum till i 
        pf[i]=pf[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        // long long sum=0;
        // // Time Complexity -> O(N)+O(Q*N)
        // for(int i=l;i<=r;i++){
        //     sum+=arr[i];
        // }
        // cout<<sum<<endl;

        // Time complexity -> O(N)+O(Q)
        cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0;
}