#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("love");
    s.push("babaer");
    s.push("Kumar");
    s.push("Avanish");
    cout<<"top Element "<<s.top()<<endl;
    /* pop se last element hatt jata h aur baar karkne se hatata hinjata hai*/
    /*last in first out hota hai isme qki ye stack hai .*/
    s.pop();
    cout<<"top Element "<<s.top()<<endl;
    s.pop();
    cout<<"top Element "<<s.top()<<endl;
    cout<<"Size Of Stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;

}
