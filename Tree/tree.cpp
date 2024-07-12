// IN c++
#include <iostream>
using namespace std;
int secondLargest(int arr[], int n) {
    int largest = 0, secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
}
int main() {
    int arr[] = { 1,4,7,8,4,8,1,4,9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int second_Largest = secondLargest(arr, n);
    if (second_Largest == -1)
        cout << "Second largest didn't exit\n";
    else
        cout << "Second largest : " << arr[second_Largest];
}
//AVANISH KUMAR GUPTA 
// Mobile- 8382026262