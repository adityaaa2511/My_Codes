#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll k;
    cin>>k;
    ll cnt=0;
    vector <ll> perfect;
    for(ll i=19;i<=1e18;i++){
        //cout<<1<<endl;
        ll value=i;
        int sum=0;
        while(value>0){
            int rem=value%10;
            sum+=rem;
            value=value/10;
            if(sum>10){
                break;
            }
            //cout<<2<<endl;
        }
        if(sum==10){
            cnt++;
            //cout<<3<<endl;
        }
        if(cnt==k){
            cout<<i;
            break;
        }
    }
}