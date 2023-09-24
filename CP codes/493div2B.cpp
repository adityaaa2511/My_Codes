#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, b;
    cin >> n >> b;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt1 = 0;
    int cnt2 = 0;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cnt2++;
        }
        else
        {
            cnt1++;
        }
        if (cnt1 == cnt2 && i < n - 1)
        {
            nums.push_back(abs(arr[i + 1] - arr[i]));
        }
    }
    int cnt = 0;
    if(nums.size()==0){
        cout<<cnt;
        return 0;
    }
    sort(nums.begin(), nums.end());
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<endl;
    // }
    int j = 0;
    while (b>=0)
    {
        b -= nums[j];
        j++;
        cnt++;
        if (j >= nums.size())
        {
            break;
        }
    }
    if(b<0){
        cnt--;
    }
    cout << cnt;
    return 0;
}