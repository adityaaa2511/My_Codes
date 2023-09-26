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
        ll n,k,x;
        cin>>n>>k>>x;
        if(x>=((k*(k+1))/2) && x<=((k*(2*n-k+1))/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}