#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long i=0;
        long long cnt=0;
        long long value=0;
        vector <long long> a;
        bool flag=true;
        while(i<n){
            if(arr[0]!=0){
                flag=false;
                break;
            }
            else if(arr[i]==0 && i==0){
                cnt++;
                i++;
            }
            else if(i==n-1){
                if(arr[i]==value){
                    cnt++;
                    a.push_back(cnt);
                    i++;
                }
                else{
                    a.push_back(cnt);
                    cnt=0;
                    if(arr[i]-value!=1){
                        flag=false;
                        i++;
                    }
                    else{
                        value=arr[i];
                        cnt++;
                        a.push_back(cnt);
                        i++;
                    }
                }
            }
            else{
                if(arr[i]==value){
                    cnt++;
                    i++;
                }
                else{
                    a.push_back(cnt);
                    cnt=0;
                    if(arr[i]-value!=1){
                        flag=false;
                        break;
                    }
                    else{
                        value=arr[i];
                        cnt++;
                        i++;
                    }
                }
            }
        }
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]){
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}