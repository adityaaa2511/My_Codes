#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll b,g,n;
    cin>>b>>g>>n;
    ll cnt=0;
    if(b+g==n){
        cout<<1;
    }
    else{
        ll m=min(b,g);
        if(m==b){
            for(ll i=0;i<=b;i++){
                for(ll j=0;j<=g;j++){
                    if(i+j==n){
                        cnt++;
                    }
                }
            }
        }
        else{
            for(ll i=0;i<=g;i++){
                for(ll j=0;j<=b;j++){
                    if(i+j==n){
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt;
    }
    return 0;
}