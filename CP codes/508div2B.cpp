#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<"No";
    }
    else{
        cout<<"Yes"<<endl;
        if(n==10){
            cout<<1<<" "<<5<<endl;
           cout<<"9 1 2 3 4 6 7 8 9 10";
        }
        else if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
            for(int i=1;i<=n;i=i+2){
                cout<<i<<" ";
            }
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
            }
        }
        else{
            cout<<n/2<<" "<<(n/2)+1<<endl;
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
            }
            for(int i=1;i<=n;i=i+2){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}