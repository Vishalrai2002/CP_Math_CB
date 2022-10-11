#include<bits/stdc++.h>
using namespace std;

void solution(){
   int n;
        cin>>n;
    vector<string>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        getline(cin,b[i]);
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<"Begin"<<b[i]<<" ";
        }
        else{
            if(a[i-1]=="Left"){
                cout<<"Right"<<b[i]<<" ";
            }
            else{
                cout<<"Left"<<b[i]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solution();
    }

    return 0;
}