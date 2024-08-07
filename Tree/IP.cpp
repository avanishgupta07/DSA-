class Solution {
  public:
    int isValid(string str) {
        // code here
        
        int count=0;
         if(str[0] == '0' or str[0] == '.')
        {
            return 0;
        }
        for(int i=0;i<str.size();i++) {
            string s="";
      while(str[i]!='.' && i<str.size()) {
                s+=str[i]; 
                if(stoi(s)>255 || stoi(s)<0) {
                return 0;
                break;}
            i++;
            }
              if(str[i]==str[i+1] and str[i]=='.') return 0;
            count++;
        }
        if(count!=4) return 0;
        return 1;
    }
};



// You are given a string str in the form of an IPv4 Address. Your task is to validate an IPv4 Address, if it is valid return true otherwise return false.

// IPv4 addresses are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1

// A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255. Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255)

// Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.

// Examples :

// Input: str = 222.111.111.111
// Output: true
// Explanation: Here, the IPv4 address is as per the criteria mentioned and also all four decimal numbers lies in the mentioned range.
// Input: str = 5555..555
// Output: false
// Explanation: 5555..555 is not a valid. IPv4 address, as the middle two portions are missing.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=str.length() <=15

//GFG-Validate an IP Address

//GFG POD -07/Aug/2024
