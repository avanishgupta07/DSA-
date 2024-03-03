#include<iostream>
using namespace std;
int main(){
    char ch='1';
    cout<<endl;
    switch(ch){
        case 1:
            cout<<"first"<<endl;
            break;
        case '1':
            cout<<"character one"<<endl;
            break;
        case 3:
            cout<<"third"<<endl;
            break;
    default:
    cout<<"this is default case"<<endl;
        
    }
    cout<<endl;
}