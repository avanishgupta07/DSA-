#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    // address of ooperator print 
    cout<<"Address of opoerator print "<<&num<<endl;
    int *ptr=&num;
    cout<<*ptr<<endl;
    //ptr print karenge to bas ye hame adress ki value hi denga yaar .
    cout<<ptr<<endl;
    double d=4.2;
    double *p2=&d;
    cout<<"Address is"<<p2<<endl;
    cout<<"value is"<<*p2<<endl;
    cout<<"size of pointer *ptr = "<<sizeof(ptr)<<endl;
    cout<<"size of pointer *p2 = "<<sizeof(p2)<<endl;
    cout<<"size of integer num = "<<sizeof(num)<<endl;
   return 0;
}