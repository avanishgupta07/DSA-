#include <iostream>
using namespace std;
 
int main() {
    int n=100;
    int count = 0;
     
    // Count the number of integers divisible by 2
    for(int i = 2; i < n; i += 2) {
        count++;
    }
     
    // Count the number of integers divisible by 3
    for(int i = 3; i < n; i += 3) {
        count++;
    }
     
    // Count the number of integers divisible by 5
    for(int i = 5; i < n; i += 5) {
        count++;
    }
     
    // Count the number of integers divisible by both 2 and 3
    for(int i = 6; i < n; i += 6) {
        count--;
    }
     
    // Count the number of integers divisible by both 2 and 5
    for(int i = 10; i < n; i += 10) {
        count--;
    }
     
    // Count the number of integers divisible by both 3 and 5
    for(int i = 15; i < n; i += 15) {
        count--;
    }
     
    // Count the number of integers divisible by 2, 3, and 5
    for(int i = 30; i < n; i += 30) {
        count++;
    }
     
    // Print the final count
    cout << "The number of positive integers less than " << n << " that are divisible by either 2, 3, or 5 is " << count << "." << endl;
     
    return 0;
}