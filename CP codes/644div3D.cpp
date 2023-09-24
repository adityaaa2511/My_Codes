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
        ll val1 = pow(n, 0.5);
        vector<ll> arr;
        if(n==1){
            arr.push_back(1);
        }
        else if (n <= 100 && n>1)
        {
            for (ll i = 1; i <= n / 2; i++)
            {
                if (n % i == 0 && i != val1)
                {
                    arr.push_back(i);
                    arr.push_back(n / i);
                }
                else if (n % i == 0 && i == val1)
                {
                    arr.push_back(i);
                }
            }
        }
        else
        {
            for (ll i = 1; i <= val1; i++)
            {
                if (n % i == 0 && i != val1)
                {
                    arr.push_back(i);
                    arr.push_back(n / i);
                }
                else if (n % i == 0 && i == val1)
                {
                    arr.push_back(i);
                }
            }
        }

        sort(arr.begin(), arr.end());
        if (k >= arr[arr.size() - 1])
        {
            cout << 1 << endl;
        }
        else
        {
            for (ll i = 0; i < arr.size(); i++)
            {
                if (arr[i] > k)
                {
                    cout << n / arr[i - 1] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}