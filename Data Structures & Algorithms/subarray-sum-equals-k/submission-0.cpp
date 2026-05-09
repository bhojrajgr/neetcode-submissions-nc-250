class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        count[0] = 1; // base case: prefix ssum = 0
        int prefix = 0, result = 0;

        for(int num : nums) {
            prefix += num;
            if(count.find(prefix-k) != count.end()) {
                result += count[prefix - k];
            }
            count[prefix]++;
        }
        return result;
    }
};