#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,m;
    cin>>t;
    while(t--){
       cin>>n>>m;
        if(n==1){
            cout<<"0\n";
        }
        else if(n==2){
            cout<<m<<"\n";
        }
        else{
            cout<<m*2<<"\n";
        }
    }

    return 0;
}