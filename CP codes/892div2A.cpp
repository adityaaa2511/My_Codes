#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> arr;
        for(ll i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        if ( std::equal(arr.begin() + 1, arr.end(), arr.begin()) )
        {
            cout<<-1<<endl;
        }
        else{
            sort(arr.begin(),arr.end());
            ll value=arr[n-1];
            vector <ll> b;
            vector <ll> c;
            ll index=n-1;
            for(ll i=0;i<n-1;i++){
                if(arr[i]==value){
                    index=i;
                    break;
                }
            }
            for(ll i=0;i<=index-1;i++){
                b.push_back(arr[i]);
            }
            for(ll i=index;i<n;i++){
                c.push_back(arr[i]);
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(ll i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(ll i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}