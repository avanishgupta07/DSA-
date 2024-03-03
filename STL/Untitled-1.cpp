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