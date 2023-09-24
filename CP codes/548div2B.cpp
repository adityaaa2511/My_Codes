#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll x=0;
    ll m=0;
    ll cnt=0;
    if(n>1){
        for(ll i=1;i<n;i++){
            if(arr[i]<=arr[i-1]){
                ll j=i-1;
                ll nw=0;
                ll val=max(x,arr[i]-1);
                while(j>=0){
                    nw+=min(val,arr[j]);
                    if(arr[j]==min(val,arr[j])){
                        val=arr[j];
                    }
                    val--;
                    if(val<=0){
                        break;
                    }
                    j--;
                }
                cnt=nw;
            }
            cnt+=arr[i];
            m=max(m,cnt);
        }
    }
    else{
        m=arr[0];
    }
        cout<<m;
    return 0;
}