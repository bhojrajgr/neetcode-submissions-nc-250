class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
//Sorted arr approach
    sort(nums.begin(), nums.end());
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i-1]) return true;
    }
    return false;

// Using map
        // unordered_set<int> seen;
        // for(int num : nums) {
        //     if(seen.count(num)) return true;
        //     seen.insert(num);
        // }
        // return false;

// Using nested loops
        // int n = nums.size();
       
        // for(int j = 0; j < n; j++) {
        //    for(int i = j+1; i < n; i++) {
        //     if(nums[j] == nums[i]) return true;
        //    }
        // }
        // return false;
    }
};