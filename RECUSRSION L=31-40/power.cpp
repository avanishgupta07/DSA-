#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    /*int smallerProblems=power(n-1);
    int biggerProblems=2*smallerProblems;
    return biggerProblems;*/
    return 2*power(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;

}