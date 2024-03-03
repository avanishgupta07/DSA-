#include<iostream>
using namespace std;
bool checkPalidrome(string str, int i ,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalidrome(str,i+1,j-1);
    }
}
   int main(){
    string name="BOOKKOOB";
    bool isPalidrome=checkPalidrome(name,0,name.length()-1);
    if(isPalidrome){
        cout<<"its is palidrome"<<endl;
    }
    else{
        cout<<"Its is not a palidrome"<<endl;
    }
    return 0;
}
