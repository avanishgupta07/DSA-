#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(1);
    s.push(111);
    s.pop();
        s.pop();
           // s.pop();
                // s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){
    cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }
    return 0;
    }

