#include<bits/stdc++.h>
#define ll long long
using namespace std;
void init() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=min(a,b);
        int y=max(a,b);
        float mid=(a+b)/2.0;
        float less=mid-x;
        float c1=c/1.0;
        float ans=remainder(less,c1);
        int lol=less/c;
        if(ans==0){
            cout<<lol<<endl;
        }
        else{
            cout<<lol+1<<endl;
        }
    }
    return 0;
}