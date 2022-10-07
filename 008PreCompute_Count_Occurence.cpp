/*
Given an array a of N integers. Given Q queries and in each
query given a number x, print the count of that number in 
array.

Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

*/

#include<iostream>
using namespace std;

const int N=1e7+10;
int hsh[N];

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // maintain a hash array it store all element freq
        hsh[arr[i]]++; // count every element freq
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int cnt=0;
        // time complexity -> O(N)+O(T*N) -> O(N^N) 10^10 not passed in 1 sec
        
        // for(int i=0;i<n;i++){
        //     if(arr[i]==x){
        //         cnt++;
        //     }
        // }
        // cout<<cnt<<endl;

        // Directly access that count 
        // Time complexity O(N);
        cout<<hsh[x]<<endl;
    }

    return 0;
}