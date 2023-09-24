#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b;
    cin>>a>>b;
    if(b-a>=5){
        cout<<0;
        return 0;
    }
    else if(a==b){
        cout<<1;
        return 0;
    }
    else if(b-a==1){
        cout<<b%10;
    }
    else{
        int ans=1;
        int val=(b%10);
        for(int i=1;i<=(b-a);i++){
            if(val<0){
                val=9;
            }
            ans=ans*val;
            val--;
        }
        cout<<ans%10;
        return 0;
    }
    return 0;
}