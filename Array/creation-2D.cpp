#include<iostream>
using namespace std;
int main(){
 // 2d Array creation
    int arr[3][4];
    // taking input value as input 
    for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
        cin>>arr[i][j];
     }
    }
    // print input as output in 2d array form;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}