#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << s.size();
    }
    else if (cnt < k)
    {
        cout << s.size() - 1;
    }
    else
    {
        ll num = 0;
        ll zeroes=0;
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                zeroes++;
                s = s.substr(0, s.size() - 1);
                if (zeroes == k)
                {
                    cout << num;
                    break;
                }

            }
            else
            {
                num++;
                s = s.substr(0, s.size() - 1);
            }
        }
    }
    return 0;
}