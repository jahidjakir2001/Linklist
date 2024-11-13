#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x,y,z;
        x=a,y=b,z=(a+b)/2;
        int ans;
        ans=(x-a)+(b-x);
        ans=min(ans,(y-a)+(b-y));
        ans=min(ans,(z-a)+(b-z));
        cout<<ans<<endl;
    }
}
