#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll value=1;
        if(x>0 && y>0){
            cout<<-1<<endl;
        }
        else if(x==0 && y==0){
            cout<<-1<<endl;
        }
        else{
            ll m=max(x,y);
            if(((n-1)%m)!=0){
                cout<<-1<<endl;
            }
            else{
                ll winner=1;
                ll value=2;
                ll cnt=0;
                while(cnt<n-1){
                    if(cnt%m==0 && cnt>0){
                        cnt++;
                        winner=max(winner,value);
                        cout<<winner<<" ";
                        value+=1;
                    }
                    else{
                        cnt++;
                        winner=min(winner,value);
                        cout<<winner<<" ";
                        value+=1;
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}