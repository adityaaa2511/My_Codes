#include<bits/stdc++.h>
#define ll long long
using namespace std;
void init() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
int main(){
    init();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        vector<ll> ans;
        if(arr[0]==1){
            ans.push_back(2);
        }
        else{
            ans.push_back(1);
        }
        if(arr.size()!=1){
            for(ll i=1;i<n;i++){
                if((ans[i-1]+1)!=arr[i]){
                    ans.push_back(ans[i-1]+1);
                }
                else{
                    ans.push_back(ans[i-1]+2);
                }
            }
        }
        cout<<ans[n-1]<<endl;
    }
    return 0;
}