#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> phone_book;

    int n;
    cin>>n;
    string name;
    for(int i=0; i<n; i++){
        cin>>name;

        if(!phone_book[name]){
            cin>>phone_book[name];
        }
    }

    while(cin>>name){
        if(phone_book[name]){
            cout<<name<<" = "<<phone_book[name]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }

    }
}