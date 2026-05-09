class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
       
        for(int j = 0; j < n; j++) {
           for(int i = j+1; i < n; i++) {
            if(nums[j] == nums[i]) return true;
           }
        }
        return false;
    }
};