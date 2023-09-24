#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int a[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=0){
                cnt++;
            }
        }
        bool flag=true;
        vector <int> o;
        int cnt1=0;
        if(a[0]==2 && a[1]==1){
            cout<<1<<endl;
            cout<<2<<" "<<1<<endl;
        }
        else if(cnt==n){
            int i=0;
            while(i<n){
                if(a[i+1]-a[i]<0){
                    a[i+1]=a[i]+a[i+1];
                    cnt1++;
                    flag=false;
                    o.push_back(i+2);
                    o.push_back(i+1);
                    i++;
                }
                else{
                    i++;
                }
            }
        }
        else if(cnt<n){
            int i=0;
            while(i<n){
                if(a[i]>=0 && a[i+1]-a[i]>=0){
                    i++;
                    //cout<<1<<endl;
                }
                else if((a[i]>=0 && a[i+1]-a[i]<0) && a[i+1]>=0){
                    a[i+1]=a[i]+a[i+1];
                    cnt1++;
                    flag=false;
                    o.push_back(i+2);
                    o.push_back(i+1);
                    //cout<<2<<endl;
                    i++;
                }
                else if(a[i+1]<0 && a[i]>=0){
                    i++;
                    //cout<<5<<endl;
                }
                else{
                    int index=distance(a,max_element(a,a+n));
                    while(a[index+1]==a[index]){
                        index+=1;
                        i++;
                    }
                    if(((-1)*a[i])<=*max_element(a,a+n)){
                        a[i]=a[i]+*max_element(a,a+n);
                        cnt1++;
                        flag=false;
                        o.push_back(i+1);
                        o.push_back(index+1);
                        //cout<<3<<endl;
                        if(a[i]-a[i-1]<0){
                            a[i]=a[i]+a[i-1];
                            cnt1++;
                            flag=false;
                            o.push_back(i+1);
                            o.push_back(i);
                            i++;
                           // cout<<4<<endl;
                        }
                        else{
                            i++;
                            //cout<<6<<endl;
                        }
                    }
                    else if((-1)*a[i]>*max_element(a,a+n)){
                        a[index]=2*a[index];
                        cnt1++;
                        flag=false;
                        o.push_back(index+1);
                        o.push_back(index+1);
                        //cout<<7<<endl;
                    }
                }
            }
        }
        if(flag==true){
            cout<<0<<endl;
        }
        else{
            cout<<cnt1<<endl;
            for(int i=0;i<2*cnt1;i=i+2){
                cout<<o[i]<<" "<<o[i+1]<<endl;
            }
        }
    }
    return 0;
}