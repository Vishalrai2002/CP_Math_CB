/*
Given 2d array of N*N integers Given Q queries and in each
queries give a,b,c and d print sum of square of (a,b) as top
left point and (c,d) as bottom right points

constraints
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d <=N

*/

#include<iostream>
using namespace std;

const int N=1e3+10;
int arr[N][N];
int pf[N][N]; // Declared 2d prefix sum array

int main(){
    int n;
    cin>>n;
    // int arr[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            // Below i Calculated the prefix sum and store it
            // Check notes 
            pf[i][j]=arr[i][j]+pf[i][j-1]+pf[i-1][j]-pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        // long long sum=0;
        // Time Complexity -> O(N^2) + O(Q+N^2) -> 10^5+10^6 = 10^11 give TLE
        // for(int i=a;i<=c;i++){ 
        //     for(int j=b;j<=d;j++){
        //         sum+=arr[i][j];
        //     }
        // }
        // cout<<sum<<endl;

        // Time Complexity -> O(N^2) + O(Q) -> 10^6 + 10^5 = 10^6
        // Check notes
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
    }
    
    return 0;
}