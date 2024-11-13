#include<bits/stdc++.h>
using namespace std;
string s="aeiou";
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        string s1;
        cin>>a;
        if(a<=5){
            for(int i=0;i<a;i++){
                s1+=s[i];
            }
            cout<<s1<<endl;
            continue;
        }
        int sz,x;
        x=a%5;
        sz=(a/5);
        int k=0;
        for(int i=1;i<=5;i++){
            for(int j=0;j<sz;j++){
                s1+=s[i-1];
            }
            if(x>0){
                s1+=s[k++];
                x--;
            }
        }
        cout<<s1<<endl;
    }
}
