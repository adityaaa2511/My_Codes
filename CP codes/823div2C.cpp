#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    cin.get();
    while(t--){
        string s;
        getline(cin,s);
        int n=s.size();
        vector <int> arr;
        int i=1;
        while(i<n){
            if(s[i]-'0'>=s[i-1]-'0'){
                i++;
            }
            else{
                for(int j=0;j<i;j++){
                    if(s[j]-'0'>s[i]-'0'){
                        if(s[j]-'0'!=9){
                            arr.push_back(s[j]-'0'+1);      
                        }
                        else{
                            arr.push_back(s[j]-'0');                
                        }
                        string a1=s.substr(0,j);
                        string a2=s.substr(j+1,n-j-1);
                        s=a1+a2;
                        n--;
                        i--;
                        j--;
                    }
                }
                i++;
            }
        }
        for(int i=0;i<s.size();i++){
            arr.push_back(s[i]-'0');
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}