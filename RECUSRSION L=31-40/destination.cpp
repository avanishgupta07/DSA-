#include<iostream>
using namespace std;
void range(int source, int destination){
    cout<<source <<" "<<destination<<endl;
    if(source==destination){
    cout<<"pahuch gya hoo yaar"<<endl;
    return ;}
    source++;
  range(source,destination);
}
int main(){
    int source=1;
    int destination=10;
    range(source,destination);
    return 0;

}