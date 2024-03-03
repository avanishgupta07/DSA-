#include <iostream>
using namespace std;
int factorial(int n)
{
	return  (n == 0 || n == 1) ? 1 :n*factorial(n-1);
}

int main()
{
	int num;
    cout<<"enter Your Number"<<endl;
    cin>>num;
    int ans=factorial(num);
	cout <<ans<< endl;
	return 0;
}