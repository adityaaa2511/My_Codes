#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool flag = false;
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < min(n, k + 1); i++)
        {
            if (s[i] == '1')
            {
                flag = true;
            }
        }
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    if (cnt == k)
                    {
                        bool one=false;
                        int idx=0;
                        for(int j=i+1;j<=i+min(n-i-1,k);i++){
                            if(s[j]=='1'){
                                idx=j;
                                one=true;
                                break;
                            }
                        }
                        if(one){
                            i=idx;
                            cnt=0;
                            cout<<"H"<<endl;
                        }
                        else{
                            maxi++;
                            cnt = 0;
                            cout<<"I"<<endl;
                        }
                        cout << "YO" << endl;
                    }
                    else
                    {
                        cnt++;
                        cout << "NYO" << endl;
                    }
                }
                else if (s[i] == '1')
                {
                    cnt = 0;
                    cout << "YOO" << endl;
                }
            }
        }
        else{
            maxi=1;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '0')
                {
                    if (cnt == k)
                    {
                        bool one=false;
                        int idx=0;
                        for(int j=i+1;j<=i+min(n-i-1,k);i++){
                            if(s[j]=='1'){
                                idx=j;
                                one=true;
                                break;
                            }
                        }
                        if(one){
                            i=idx;
                            cnt=0;
                        }
                        else{
                            maxi++;
                            cnt = 0;
                        }
                        cout << "OY" << endl;
                    }
                    else
                    {
                        cnt++;
                        cout << "OYN" << endl;
                    }
                }
                else if (s[i] == '1')
                {
                    cnt = 0;
                    cout << "OOY" << endl;
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}