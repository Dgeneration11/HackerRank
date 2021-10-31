#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> a)
{
    int d1 = 0, d2 = 0;
    int n = a.size() - 1;
    for (int i = 0; i < a.size(); i++)
    {
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }
    return abs(d1 - d2);
}

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> a(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            a[i][j] = x;
        }
    }

    cout<<diagonalDifference(a);    
}

