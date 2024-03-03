#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,string> m;
m[1]="babbar";
m[13]="kumar";
m[2]="love";
m.insert({5,"bheem"});
for(auto i:m){
    cout<<i.first<<endl;
    }

cout<<"finding -13 > "<<m.count(-13)<<endl;
/* map hamesa value ko sorted karke deta hai*/
}