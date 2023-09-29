#include <bits/stdc++.h>
#define ll long long
using namespace std;
void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    if(a.second!=b.second){
        return a.second>b.second;
    }
    else{
        return a.first<b.first;
    }
}
int main()
{
    init();
    ll n;
    cin >> n;
    vector<pair<int, int>> rank;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll sum = a + b + c + d;
        pair<ll, ll> p = make_pair(i, sum);
        rank.push_back(p);
    }
    sort(rank.begin(), rank.end(), compare);
    for (int i = 0; i < n; i++)
    {
        if (rank[i].first == 0)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}