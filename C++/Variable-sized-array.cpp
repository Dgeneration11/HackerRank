#include "bits/stdc++.h"
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q, k;
    cin>>n>>q;
    
    vector<vector<int>> a(n);
    for(int i=0; i<n; i++){
        cin>>k;
        a[i].resize(k);
        
        for(int j=0; j<k;j++){
            cin>>a[i][j];
        }
    }
    
    int c,d;
    for(int i=0; i<q;i++){
        cin>>c>>d;
        cout<<a[c][d]<<endl;
    }
          
          
    return 0;
}
