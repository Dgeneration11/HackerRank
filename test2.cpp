#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    while (t--)
    {
        long  n;
        cin >> n;
        long res = 1;
        int count = 0;
        for (int i = 0; i < primes.size(); i++)
        {
            res = res * primes[i];
            if (res <= n)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}