class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());

        sort(nums3.begin(), nums3.end());

        int total = nums3.size();
        if (total % 2 == 1) {
            // odd length → middle element
            return nums3[total / 2];
        } else {
            // even length → average of two middle elements
            return (nums3[total / 2 - 1] + nums3[total / 2]) / 2.0;
        }
    }
};
