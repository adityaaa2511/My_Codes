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
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flg=true;
        ll val=0;
        for(ll i=0;i<n;i++){
            if(arr[i]<0){
                flg=false;
                val=arr[i];
                break;
            }
        }
        if(flg){
            cout<<*max_element(arr,arr+n)<<endl;
        }
        else{
            cout<<val<<endl;
        }
    }
    return 0;
}