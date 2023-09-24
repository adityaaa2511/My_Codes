#include<bits/stdc++.h>
#define ll long long
using namespace std;



string solve(string a,string b){
    if(a==b) return "YES";
    int size= a.size();
    if(a[size-2]=='0' && b[size-2]=='0') return "YES";
    if(a[size-2]=='1'&& b[size-2]=='1') return solve(a.substr(0,size-1),b.substr(0,size-1));
    else{
        int i= size-3;
        while((a[i]!='1'|| b[i]!='1') && i>-1) i--;
        if(i<=0) return "NO";
        else return solve(a.substr(0,i+1),b.substr(0,i+1));
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}