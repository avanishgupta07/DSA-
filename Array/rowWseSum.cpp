#include<iostream> 
using namespace std; 

//to print row wise sum
void printColSum(int arr[][3], int row, int col) {
    cout << "Printing Sum  " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[col][row];
        }
        cout << sum << " "<<endl;
    }
}

int main() {
    int arr[3][3];
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }


    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " " ;
        }
        cout<<endl;
    }
    // function creat to call;

    printColSum(arr, 3, 3 );
    return 0;
}