#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                a += tolower(s[i]);
            }
        }
        string b = "";
        for(int i = a.size() - 1; i >= 0; i--){
            b += a[i];
        }

        return a == b;
    }
};
