#include<bits/stdc++.h>
#define ll long long
using namespace std;
void init() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
ll gcd(ll a,ll b) {
    if(b==0) {
        return a;
    }
    return gcd(b, a%b);
}
int main(){
    init();
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll cnt=0,rem=n%m,t=m/gcd(n,m);
        if(t&(t-1)){
            cout<<-1<<endl;
        }
        else{
            while(rem!=0){
                cnt+=rem;
                rem=2*rem;
                rem=rem%m;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}