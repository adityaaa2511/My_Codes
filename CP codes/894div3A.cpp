#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> arr;
        string s;
        for (int i = 0; i < n; i++)
        {
            vector<char> a;
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        bool flg=true;
        if (m < 4)
        {
            flg=false;
        }
        else
        {
            int idx = 0;
            for (int i = 0; i <= m - 4; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[j][i] == 'v')
                    {
                        s = s + 'v';
                        idx = i;
                        break;
                    }
                }
            }
            if (s != "v")
            {
                flg=false;
            }
            for (int i = idx+1; i <= m - 3; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[j][i] == 'i')
                    {
                        s = s + 'i';
                        idx = i;
                        break;
                    }
                }
            }
            if (s != "vi")
            {
                flg=false;
            }
            for (int i = idx+1; i <= m - 2; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[j][i] == 'k')
                    {
                        s = s + 'k';
                        idx = i;
                        break;
                    }
                }
            }
            if (s != "vik")
            {
                flg=false;
            }
            for (int i = idx+1; i <= m - 1; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[j][i] == 'a')
                    {
                        s = s + 'a';
                        idx = i;
                        break;
                    }
                }
            }
            if (s != "vika")
            {
                flg=false;
            }
        }
        if(flg==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}