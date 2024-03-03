#include<iostream> 
using namespace std; 


bool isPresent(int arr[][3], int target, int row, int col) {
  for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
        
            if( arr[row][col] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}

int main() {

    //create 2 d array
    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};

    //specific row aur col kwe liye use kiye karo ki fix position e koi element aaye toh.
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }


/*
//taking input -> col wise input
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }

*/
    cout <<" Enter the element to search " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }

    return 0;
}