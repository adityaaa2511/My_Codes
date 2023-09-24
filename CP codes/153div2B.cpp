#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,k,a,b;
        cin>>m>>k>>a>>b;
        b+= a/k;
        a=a%k;
        ll c=m%k;
        ll d=m/k;
        ll coins1 =max(c-a,static_cast<ll>(0));
        ll coins2 = max(d-b,static_cast<ll>(0));
        cout<<coins1+coins2<<endl;
        
        if(b<m/k && a<m%k){
            cout<<((m/k)-b+(m%k)-a)<<endl;
        }
        else if(b>=m/k && a<m%k){
            cout<<(m%k)-a<<endl;
        }
        else if(b<m/k && a>=m%k){
            int c=a-(m%k);
            int d=c/k;
            cout<<(m/k)-b-d<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}