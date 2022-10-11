#include<iostream>
using namespace std;

void solution(int n){
    int cnt=0;
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
        //   cout<<i<<" "<<n/i<<endl;
          cnt+=1;
          sum+=i;
          if(n/i!=i){
              cnt+=1;
              sum+=n/i;
          }
        }
        
    }
    cout<<sum<<endl;
}
int main()
{
  
        int n;
        cin>>n;
        solution(n);


    return 0;
}