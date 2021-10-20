#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0, lc = 0, sp = 0, num = 0;
    int x = 0;
    for (int i = 0; i < s.length(); i++)
    {
        x = s[i] - NULL;
        if (x >= 65 && x <= 90)
        {
            up++;
        }
        else if (x >= 97 && x <= 122)
        {
            lc++;
        }
        else if (x >= 48 && x <= 57)
        {
            num++;
        }
        else
        {
            sp++;
        }
    }
    cout << up << end;
    cout << lc << end;
    cout << num << end;
    cout << sp << end;
}