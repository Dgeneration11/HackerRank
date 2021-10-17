#include<bits/stdc++.h>
using namespace std;

stack<int> s1;
stack<int> s2;
int front_value;

void enqueue(int value){
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    
    if(s1.empty()){
        front_value = value;
    }
    
    s1.push(value);
}

int dequeue(){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    
    int x = s2.top();
    s2.pop();
    
    if(!s2.empty()){
        front_value = s2.top();
    }
    return x;
}

int front(){
    return front_value;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        switch(x){
            case 1:
                int y;
                cin>>y;
                enqueue(y);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                cout<<front()<<endl;
                break;
        }
    }
    return 0;
}
