#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(int (s[i+1])-int (s[i])<2){
            s.erase(s.begin()+i);
        }
        else{
            flag=false;
        }
    }
    s.erase(s.begin()+k,s.end());
    int sum=0; //1011A
    for(int i=0;i<s.size();i++){
        sum+=(int(s[i])-60);
    }
    if(flag==false){
        cout<<-1;
    }
    else{
        cout<<sum;
    }
    return 0;
}