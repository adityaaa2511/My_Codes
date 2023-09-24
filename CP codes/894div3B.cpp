#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll b;
        cin>>b;
        stack <ll> s;
        for(ll i=0;i<b;i++){
            ll x;
            cin>>x;
            s.push(x);
        }
        vector <ll> arr;
        while(s.size()>=1){
            ll val=s.top();
            s.pop();
            arr.push_back(val);
            if(s.size()>0 && val<s.top()){
                if(val==1){
                    arr.push_back(val);
                }
                else{
                    ll x=val-1;
                    arr.push_back(x);
                }
            }
        }
        cout<<arr.size()<<endl;
        for(ll i=arr.size()-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}