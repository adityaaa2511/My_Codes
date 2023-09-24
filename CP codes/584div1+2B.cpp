#include<bits/stdc++.h>
#define ll long long
using namespace std;
void toggle(char& a){
    if(a=='1'){
        a='0';
    }
    else if(a=='0'){
        a='1';
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        pair<int,int>p;
        cin>>p.first;
        cin>>p.second;
        v.push_back(p);
    }
    int cnt=0;
    int time=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    time++;
    if(cnt==s.size()){
        cout<<cnt;
        return 0;
    }
    while(time<121){
        int cnt1=0;
        for(int i=0;i<s.size();i++){
            if((time>=v[i].second)&&((time-v[i].second)%(v[i].first)==0)){
                toggle(s[i]);
            }
            if(s[i]=='1'){
                cnt1++;
            }
        }
        if(cnt1>cnt){
            cout<<time<<" "<<cnt1<<endl;
        }
        cnt=max(cnt,cnt1);
        time++;
    }
    cout<<cnt;
    return 0;
}