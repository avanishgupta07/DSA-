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