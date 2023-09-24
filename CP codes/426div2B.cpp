#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector <ll> freq(26);
    for(ll i=0;i<s.size();i++){
        ll index=s[i]-'A';
        freq[index]++;
    }
    ll cnt=0;
    bool flag=true;
    vector<ll> table=freq;
    for(ll i=0;i<s.size();i++){
        int Idx=s[i]-'A';
        table[Idx]--;
        int gates=0;
        for(ll j=0;j<26;j++){
            if((table[j]<freq[j])&& table[j]>0){
                gates++;
            }
            if((freq[j]==1) && (j==Idx) ){
                gates++;
            }
        }
        if(gates>k){
            flag= false;
            break;
        }
    }
    if(!flag){
        cout<<"Yes";

    }else{
        cout<<"No";
    }
    return 0;
}