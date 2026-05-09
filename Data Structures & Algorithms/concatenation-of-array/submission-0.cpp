class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>nums2;
        for(int num : nums) nums2.push_back(num);
        for(int num : nums) nums2.push_back(num);
        
        return nums2;
    }
};