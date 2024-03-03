#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    /* push ke jaise pop bhi kar sakte hai */
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of list "<<l.size()<<endl;
/*
25.40 pe vide dekh lena lecture number 20
*/







}

