#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    if(k<=n){
        cout<<(k-1)/2;
    }
    else{
        if(k%2==0){
            ll v=0;
            cout<<max(v,(2*n-k+1)/2);
        }
        else{
            ll v=0;
            cout<<max(v,(2*n-k+1)/2);
        }
    }
    return 0;
}