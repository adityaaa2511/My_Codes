#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(vector<string> &arr, ll n, ll m)
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if ((arr[i][j] == '0') && (i < n - 1 && j < m - 1))
            {
                if (arr[i + 1][j] == '0' || arr[i + 1][j + 1] == '0' || arr[i][j + 1] == '0')
                {
                    return true;
                }
            }
            else if ((arr[i][j] == '0') && (i == n - 1 && j < m - 1))
            {
                if (arr[i][j + 1] == '0')
                {
                    return true;
                }
            }
            else if ((arr[i][j] == '0') && (i < n - 1 && j == m - 1))
            {
                if (arr[i + 1][j] == '0' || arr[i + 1][j - 1] == '0')
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll cnt1 = 0;
        ll cnt2 = 0;
        vector<string> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (ll j = 0; j < m; j++)
            {
                if (arr[i][j] == '0')
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
            }
        }
        if (check(arr, n, m))
        {
            cout << cnt2 << endl;
        }
        else
        {
            if (cnt2 == n * m)
            {
                cout << cnt2 - 2 << endl;
            }
            else if (cnt2 > 0 && cnt2 < n * m)
            {
                cout << cnt2 - 1 << endl;
            }
        }
    }
    return 0;
}
