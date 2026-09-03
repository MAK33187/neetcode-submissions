class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        int a=nums[0];
        for(int i = 1 ; i<nums.size(); i++){
            if(a==nums[i]){
                return true;
                break;
            }
            else{
                a=nums[i];
            }

        }
        return false;

        
    }
};