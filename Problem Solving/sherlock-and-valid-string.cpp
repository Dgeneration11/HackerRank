#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    unordered_map<char, int> mp;
    
    for(auto i : s){
        mp[i]++;
    }
    
    // find maximum frequency 
    int max_freq = INT_MIN;
    for(auto i : mp){
        max_freq = max(max_freq, i.second);
    }
    
    return 0;
}