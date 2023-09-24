#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    bool flg=false;
    for(int i=0;i<n-2;i++){
        if(arr[i]+arr[i+1]>arr[i+2]){
            flg=true;
        }
    }
    if(flg){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}