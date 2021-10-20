#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int x = n;
        long long int count = 0;

        while (n > 0)
        {
            long long int dig = n % 10;
            if (x % dig == 0 && x != 0)
            {
                count++;
            }
            n = n / 10;
        }
        cout << count << endl;
    }

    return 0;
}