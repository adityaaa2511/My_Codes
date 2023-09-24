#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        int cnt=0;
        vector <pair<int,vector <int>>>otpt;
        for(ll i=0;i<m;i++){
            string subs=t.substr(i,n);
            for(ll j=0;j<n;j++){
                if(s[j]=='?'){
                    continue;
                }
                else if(s[j]!=subs[j]){
                    cnt++;
                }
            }
            
        }
    }
    return 0;
}