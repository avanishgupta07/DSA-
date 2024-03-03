#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("love");
    q.push("Babbar");
    q.push("kumar");
    cout<<"Size before pop "<<q.size()<<endl;
    /* isme se love hatt jayega pop ke vaajah se */
    cout<<"first Element "<<q.front()<<endl;
    q.pop();
    cout<<"first Element "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
}
     /* First in first out hotahai queue me bas
      itna yaad rakhna jaise shadhi ke plte me jo pahle laga honga use nasta pahle milega jaise usi trh hota hai queue bhi*/