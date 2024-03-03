#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(0);
    s.insert(1);
    s.insert(0);
    for(auto i:s){
        cout<<i<<endl;
        
    }
    
    /* time complexity o(logn)*/
    
}
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s = {6, 10, 5, 4, 9, 120, 4, 6, 10}; 
    for(auto i:s){
        cout<<i<<" ";
        
    } 
}
/* time complexity o(logn)*/