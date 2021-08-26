#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int count = 0;
    string s;
    getline(cin, s);

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    cout << s << endl;
    cout << count << endl;
}