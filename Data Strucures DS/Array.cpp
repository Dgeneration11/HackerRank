#include "bits/stdc++.h"
using namespace std;

int reverse(int a[], int size);

int main(){
    int size;
    cin>>size;
    
    int a[1000];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }   
    
    reverse(a, size);
}

int reverse(int a[], int size){
    for(int i=size-1; i>=0;i--){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
