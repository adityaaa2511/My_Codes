#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string s1;
        for (int i = 1; i <= n; i++)
        {
            s1.push_back('(');
        }
        for (int i = 1; i <= n; i++)
        {
            s1.push_back(')');
        }
        string s2;
        for (int i = 1; i <= 2 * n; i += 2)
        {
            s2.push_back('(');
            s2.push_back(')');
        }
        bool one = true;
        bool two = true;
        for (int i = 0; i <= n; i++)
        {
            string s3 = s1.substr(i, n);
            string s4 = s2.substr(i, n);
            if (s3 == s)
            {
                two = false;
            }
            if (s4 == s)
            {
                one = false;
            }
        }
        if (!one && !two)
        {
            cout << "NO" << endl;
        }
        else if (one)
        {
            cout << "YES" << endl;
            for (int i = 0; i < s2.size(); i++)
            {
                cout << s2[i];
            }
            cout << endl;
        }
        else if (two && !one)
        {
            cout << "YES" << endl;
            for (int i = 0; i < s1.size(); i++)
            {
                cout << s1[i];
            }
            cout << endl;
        }
    }
    return 0;
}