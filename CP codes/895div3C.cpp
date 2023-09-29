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
        ll l,r,cnt=0;
        cin>>l>>r;
        bool flg=false;
        if((l==1 && (r==1||r==2||r==3))||(l==2 &&(r==2||r==3))){
            cout<<-1<<endl;
        }
        else{
            for(ll i=l;i<=r;i++){
                if(i%2==0 && (i/2!=1)){
                    flg=true;
                    cnt=i;
                    break;
                }
            }
            if(flg){
                cout<<cnt/2<<" "<<cnt/2<<endl;
            }
            else{
                bool prime=true;
                for(ll i=3;i<=pow(l,0.5)+1;i++){
                    if((l%i)==0){
                        cnt=i;
                        prime=false;
                        break;
                    }
                }
                if(prime){
                    cout<<-1<<endl;
                }
                else{
                    cout<<l-cnt<<" "<<cnt<<endl;
                }
            }
        }
    }
    return 0;
}