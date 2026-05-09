class Solution {
public:
   void sortColors(vector<int>& nums) {
     int low = 0, mid = 0, high = nums.size() - 1;

     while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
     }

    // Sol-1: Using Selection sort
    // int n = nums.size();
    // for (int i = 0; i < n-1; i++) {
    //     int minIdx = i;
    //     // find the minimum in the unsorted part
    //     for (int j = i+1; j < n; j++) {
    //         if (nums[j] < nums[minIdx]) {
    //             minIdx = j;
    //         }
    //     }
    //     // swap the found minimum with nums[i]
    //     swap(nums[i], nums[minIdx]);
    // }
}
};