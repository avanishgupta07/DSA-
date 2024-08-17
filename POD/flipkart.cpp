    long long int product=1;
        bool found_zero=false;
        int cnt_zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }else{
                 cnt_zero++;
            }
        }
        vector<long long int>ans;
        if(cnt_zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                ans.push_back(product);
                 }else ans.push_back(0);
            }
        }else if(cnt_zero>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }else{
            for(int i=0;i<nums.size();i++){
                ans.push_back(product/nums[i]);
            }
        }
        return ans;










//         Given an array nums[], construct a Product Array nums[] such that nums[i] is equal to the product of all the elements of nums except nums[i].

// Examples:

// Input: nums[] = [10, 3, 5, 6, 2]
// Output: [180, 600, 360, 300, 900]
// Explanation: For i=0, P[i] = 3*5*6*2 = 180.
// For i=1, P[i] = 10*5*6*2 = 600.
// For i=2, P[i] = 10*3*6*2 = 360.
// For i=3, P[i] = 10*3*5*2 = 300.
// For i=4, P[i] = 10*3*5*6 = 900.
// Input: nums[] = [12,0]
// Output: [0, 12]