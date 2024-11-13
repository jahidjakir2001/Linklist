#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
       b%=2;
       if(a%2==0&&b%2==0||a%2==0&&b==1){
           cout<<"YES"<<endl;
       }else{
          cout<<"NO"<<endl;
       }
    }
}