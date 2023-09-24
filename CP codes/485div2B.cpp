#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"=";
        return 0;
    }
    else if(x>=3 && y>=3){
        if(x>y){
            cout<<"<";
            return 0;
        }
        else{
            cout<<">";
            return 0;
        }
    }
    else if(x<3 && y<3){
        if(x>y){
            cout<<">";
            return 0;
        }
        else{
            cout<<"<";
            return 0;
        }  
    }
    else{
        if(x==1 || y==1){
            if(x>y){
                cout<<">";
                return 0;
            }
            else{
                cout<<"<";
                return 0;
            }
        }
        else if(x==2 || y==2){
            if(max(x,y)==3){
                if(x==max(x,y)){
                    cout<<">";
                    return 0;
                }
                else{
                    cout<<"<";
                    return 0;
                }
            }
            else if(max(x,y)==4){
                cout<<"=";
                return 0;
            }
            else{
                if(x==max(x,y)){
                    cout<<"<";
                    return 0;
                }
                else{
                    cout<<">";
                    return 0;
                }
            }
        }
    }
    return 0;
}