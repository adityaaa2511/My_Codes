#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(ll i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                cout<<31<<endl;
                break;
            }
            else if(s[i]=='3'){
                cout<<13<<endl;
                break;
            }
        }
    }
    return 0;
}