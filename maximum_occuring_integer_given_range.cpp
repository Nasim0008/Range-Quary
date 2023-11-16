#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    map<int, int> mp;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        // r+=1;
        mp[r]--;
    }
    int mx_occur_value;
    int sum = 0, mx = 0;
    for (auto u : mp)
    {
        sum += u.second;
        if (sum > mx)
        {
            mx = sum;
            mx_occur_value = u.first;
        }
    }
    cout << mx_occur_value << endl;
}