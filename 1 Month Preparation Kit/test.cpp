#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    unordered_set<int> s;
    vector<int> a(6);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(2);
    a.push_back(3);
    for (auto i : a)
    {
        s.insert(i);
    }

    for (auto i : s)
    {
        cout << i << " ";
    }
}

int main()
{
    int t=1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}