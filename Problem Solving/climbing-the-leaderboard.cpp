#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> s;
    int x;
    for (int i = 0; i < n; i++)
    {

        cin >> x;
        if (s.empty() || s.top() != x)
            s.push(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> x;

        while (!s.empty() && x >= s.top())
        {
            s.pop();
        }

        cout << s.size() + 1 << "\n";
    }
}