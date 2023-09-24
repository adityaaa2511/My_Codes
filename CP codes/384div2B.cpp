#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll len=1;
    for(int i=1;i<=n;i++){
        len=2*len+1;
    }
    ll value=n+1;
    ll i=0;
    ll j=len-1;
    while(i<=j){
        ll mid=(i+j)/2;
        if(k-1==mid){
            cout<<value;
            return 0;
        }
        else if(k-1<mid){
            j=mid-1;
            value--;
        }
        else{
            i=mid+1;
            value--;
        }
        
    }
    return 0;
}