#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }
    reverse(a.begin(), a.end());;

    for(int i=0;i<n; i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
