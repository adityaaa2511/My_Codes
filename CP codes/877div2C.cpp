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
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>ans;
        bool flg=true;
        for(ll i=2;i<=pow(m,0.5);i++){
            if(m%i==0){
                flg=false;
                break;
            }
        }
        if(flg){
            for(ll i=2;i<=n;i+=2){
                vector<ll>v;
                for(ll j=((m*i)-(m-1));j<=m*i;j++){
                    v.push_back(j);
                }
                ans.push_back(v);
            }
            for(ll i=1;i<=n;i+=2){
                vector<ll>v;
                for(ll j=((m*i)-(m-1));j<=m*i;j++){
                    v.push_back(j);
                }
                ans.push_back(v);
            }
        }
        else{
            for(ll i=1;i<=n;i++){
                vector<ll>v;
                for(ll j=((m*i)-(m-1));j<=m*i;j++){
                    v.push_back(j);
                }
                ans.push_back(v);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}