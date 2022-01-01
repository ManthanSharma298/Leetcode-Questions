
// prob link: https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.size()-1;
        while(l<=r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l++]) != tolower(s[r--])) return false;
            // l++;
            // r--;
        }
        return true;
    }
};

// Time complx: O(s.length)
// Space complx: O(1)