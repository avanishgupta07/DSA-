#include<iostream>
using namespace std;
/*
// bahut hi bad pratice hai jo li notes me likh a hai resaon iska .
int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}
ise me hum dekh sakte hai ki n ki value local hi define hai global ke reference me koi va;lue hi nhui pass hoi rhgi hai 
*/
void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}

int main() {
   int n = 5;
   
   cout << "Before " << n << endl;
   // update1(n) me refrence & nhi pass kiye hai ise liye usne same value hi print kar diya hai 
   update2(n);
   cout << "After " << n << endl;


    fun(n);

    return 0;
}