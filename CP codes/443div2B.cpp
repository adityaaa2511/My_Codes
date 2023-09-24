#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll val=*max_element(v.begin(),v.end());
    ll i=0;
    ll cnt=0;
    bool flg=false;
    while(cnt<k){
        if(v[i]==val){
            flg=true;
            break;
        }
        v.push_back(min(v[i],v[i+1]));
        ll val1=min(v[i],v[i+1]);
        if(val1<v[i+1]){
            cnt=0;
        }
        v[i+1]=max(v[i],v[i+1]);
        cnt++;
        i++;
    }
    if(flg){
        cout<<val;
    }
    else{
        cout<<v[i];
    }
    return 0;
}