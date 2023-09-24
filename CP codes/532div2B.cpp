#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
int dis=0;
vector<int> freq;
void hold_round() {
    for (int i = 0; i < n; i++)
        if (--freq[i] == 0)
            dis--;
}
int main(){
    cin>>n>>m;
    freq.assign(n,0);
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        a--;
        if(freq[a]++==0){
            dis++;
        }
        if(dis==n){
            hold_round();
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}