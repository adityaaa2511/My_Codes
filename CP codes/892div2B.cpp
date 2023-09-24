#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <vector <ll>> input;
        for (ll i=1;i<=n;i++){
            ll m;
            cin>>m;
            vector <ll> inpu;
            for(ll i=1;i<=m;i++){
                ll x;
                cin>>x;
                inpu.push_back(x);
            }
            input.push_back(inpu);
        }
        for(ll i=0;i<n;i++){
            sort(input[i].begin(),input[i].end());
        }
        ll sum=0;
        ll min1=INT_MAX;
        ll min2=INT_MAX;
        for(ll i=0;i<n;i++){
            min1=min(min1,input[i][0]);
        }
        sum+=min1;
        for(ll i=0;i<n;i++){
            min2=min(min2,input[i][1]);
            sum+=input[i][1];
        }
        sum=sum-min2;
        cout<<sum<<endl;
    }
    return 0;
}