//Maximize Array Value After Rearrangement
    const int MOD = 1e9 + 7;
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
           long long int sum=0;
        sort(arr.begin(),arr.end());
        for(long long int i=0;i<arr.size();i++){
            sum+=i*arr[i];
        }
        return sum%MOD;
    };

//     Maximize Array Value After Rearrangement
// Difficulty: EasyAccuracy: 18.93%Submissions: 265K+Points: 2
// Given an array arr of n integers. Your task is to write a program to find the maximum value of ∑arr[i]*i, where i = 0, 1, 2,., n-1. You are allowed to rearrange the elements of the array.

// Note: Since the output could be large, print the answer modulo 109+7.

// Examples :

// Input : arr[] = [5, 3, 2, 4, 1]
// Output : 40
// Explanation: If we arrange the array as 1 2 3 4 5 then we can see that the minimum index will multiply with minimum number and maximum index will multiply with maximum number. So, 1*0 + 2*1 + 3*2 + 4*3 + 5*4 = 0+2+6+12+20 = 40 mod(109+7) = 40

// Input : arr[] = [1, 2, 3]
// Output : 8
// Expected Time Complexity: O(nlog(n))
// Expected Auxiliary Space: O(1)