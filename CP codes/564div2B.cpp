#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll m=(n+2)/2;
    cout<<m<<endl;
    ll val1=1;
    ll val2=1;
    for(ll i=1;i<=m;i++){
        cout<<val1<<" "<<val2<<endl;
        val2++;
    }
    val1++;
    val2--;
    for(ll i=1;i<=n-m;i++){
        cout<<val1<<" "<<val2<<endl;
        val1++;
    }
    return 0;
}