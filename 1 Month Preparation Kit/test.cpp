#include <bits/stdc++.h>
using namespace std;
vector<string> gss(string str)
{
    if (str.length() == 0)
    {
        return {""};
    }
    char ch = str[0];              //a
    string res = str.substr(1);    //bc
    vector<string> fss = gss(res); // _,_c,b,bc
    vector<string> mss;
    for (auto x : fss)
    {
        mss.push_back("" + x);
    }
    for (auto x : fss)
    {
        mss.push_back(ch + x);
    }
    return mss;
}
int main()
{
    string str;
    cin >> str;
    vector<string> v = gss(str);
    return 0;
}