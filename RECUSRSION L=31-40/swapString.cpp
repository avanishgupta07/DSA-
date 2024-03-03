#include<iostream>
using namespace std;
void reverse(string& str,int i, int j){
    cout<<"printing pattern-"<<str<<endl;
    if(i>j)
    return ;
    if(str[i]=str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);
    }
int main(){
    string name="abcde";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}
