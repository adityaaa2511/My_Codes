#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> arr;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        bool flag=true;
        for(ll i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                flag=false;
            }
        }
        int cnt=0;
        while(!flag){
            for(ll i=0;i<n;i++){
                
            }
        }
        if(flag=true){
            cout<<0<<endl;
        }
        else{

        }
    }
    return 0;
}