#include<bits/stdc++.h>
#define ll long long
using namespace std;
void init() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
int main(){
    init();
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        ll tools[n];
        for(int i=0;i<n;i++){
            cin>>tools[i];
        }
        ll cnt=b;
        for(ll i=0;i<n;i++){
            cnt+=min(a-1,tools[i]);
        }
        cout<<cnt<<endl;
    }
    return 0;
}