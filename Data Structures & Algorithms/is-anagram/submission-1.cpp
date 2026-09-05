class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        
        for(char i : s){
            a[i]++;
        }
        for(char j : t){
            b[j]++;
        }
        if(a==b){
            return true;
        }
        else{
            return false;
        }
        

    }
};
