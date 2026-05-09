class Solution {
public:
   void sortColors(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        // find the minimum in the unsorted part
        for (int j = i+1; j < n; j++) {
            if (nums[j] < nums[minIdx]) {
                minIdx = j;
            }
        }
        // swap the found minimum with nums[i]
        swap(nums[i], nums[minIdx]);
    }
}
};