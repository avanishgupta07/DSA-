#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter Your Name"<<endl;
    cin>>name;
    name[2]='\0';
    cout<<"your Name is "<<name<<endl;
 return 0;
}