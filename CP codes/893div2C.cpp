#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll curr=0;
        for(ll i=1;i<=n;i+=2){
            for(ll j=i;j<=n;j*=2){
                arr[curr]=j;
                curr++;  
            }
        }
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
