#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        bool flg=true;
        if(n>1){
            for(int i=(n+1)/2+1;i<n+1;i++){
                if((i-(n+1-i))%(arr[n+1-i]-arr[i])==0){
                    continue;
                }
                else{
                    flg=false;
                    break;
                }
            }
        }
        else{
            if(arr[1]!=1){
                flg=false;
            }
        }
        if(flg){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}