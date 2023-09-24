#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll rem=1e18;
    ll idx=0;
    vector <ll> arr;
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        arr.push_back(x);
        ll val=n%x;
        rem=min(rem,val);
        if(min(rem,val)==val){
            idx=i+1;
        }
    }
    cout<<idx<<" "<<n/arr[idx-1];
    return 0;
}