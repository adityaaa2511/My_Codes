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
        ll n;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back((2*i)-1);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}