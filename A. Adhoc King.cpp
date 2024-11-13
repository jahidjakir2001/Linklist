#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int j=3;
        for(int i=1;i<=a-1;i++){
            cout<<j<<" ";
            j+=2;
        }
        cout<<3<<endl;
    }
}
