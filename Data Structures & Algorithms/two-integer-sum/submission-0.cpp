class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        for(int i = 0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                a=nums[i]+nums[j];
                if(a==target){
                    return  {i,j};
                }
                
            }
        }
          
    }
};
