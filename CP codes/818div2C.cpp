#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> a;
        for(ll i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        vector <ll> b;
        bool flag=true;
        bool equal=false;
        for(ll i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
            if(b[i]<a[i]){
                flag=false;
            }
            if(b[i]!=a[i]){
                equal=true;
            }
        }
        if(flag && equal){
            a.push_back(a[0]);
            b.push_back(b[0]);
            for(ll i=0;i<n;i++){
                if(b[i]-b[i+1]>=2){
                    flag=false;
                }
            }
        }
        if(flag==false){
            cout<<"No"<<endl;
        }
        else if(equal==false || flag==true){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}