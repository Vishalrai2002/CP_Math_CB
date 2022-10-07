// Problem -> https://www.hackerrank.com/challenges/crush/problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N=1e7+10;
int arr[N];

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n,0);
    while(q--){
        int a,b,k;
        cin>>a>>b>>k;
        for(int i=a;i<=b;i++){
            v[i]+=k;
        }
       
    }
        cout<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}