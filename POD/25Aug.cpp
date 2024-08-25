 double transformedValue(int x){
        return (double)x / log2(x);
    }
    long long countPairs(vector<int> &arr, vector<int> &brr) {
    //   x^y > y^x
    //   y log x > x log y
    //   y / log y > x / log x
        int n = arr.size();
        int m = brr.size();
        vector<double> bin (m);
        for(int i = 0; i < m; i++){
            bin[i] = transformedValue(brr[i]);
        }
        sort(bin.begin(), bin.end());
        long long ans = 0LL;
        for(auto x : arr){
            double value = transformedValue(x);
            int left = 0, right = m - 1;
            int validPairs = 0;
            while(left <= right){
                int mid = left + (right - left)/2;
                if(bin[mid] > value){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                    validPairs = mid + 1;
                }
            }
            ans += m - validPairs;
        }
        return ans;
    }







//

// Number of pairs
// Difficulty: MediumAccuracy: 21.82%Submissions: 78K+Points: 4
// Given two positive integer arrays arr and brr, find the number of pairs such that xy > yx (raised to power of) where x is an element from arr and y is an element from brr.

// Examples :

// Input: arr[] = [2, 1, 6], brr[] = [1, 5]
// Output: 3
// Explanation: The pairs which follow xy > yx are: 21 > 12,  25 > 52 and 61 > 16 .
// Input: arr[] = [2 3 4 5], brr[] = [1 2 3]
// Output: 5
// Explanation: The pairs which follow xy > yx are: 21 > 12 , 31 > 13 , 32 > 23 , 41 > 14 , 51 > 15 .
// Expected Time Complexity: O((N + M)log(N)).
// Expected Auxiliary Space: O(1).