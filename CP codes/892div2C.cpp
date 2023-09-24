#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr;
        for(int i=0;i<n;i++){
            int x=i+1;
            arr.push_back(x);
        }
        ll sum=0;
        sort(arr.begin()+n-4,arr.end(),greater<int>());
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            sum+=(i+1)*arr[i];
        }
        sum=sum-(arr[n-2]*arr[n-3]);
        cout<<sum<<endl;
    }
    return 0;
}