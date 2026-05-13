class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        // If array is not rotated
        if (nums[left] < nums[right]) {
            return nums[left];
        }

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                // Minimum is in the right half
                left = mid + 1;
            } else {
                // Minimum is in the left half (including mid)
                right = mid;
            }
        }

        return nums[left];
    }
};

// class Solution {
// public:
//     int findMin(vector<int> &nums) {
//        int n = nums.size();
//        int minVal = INT_MAX; 

//        int left = 0, right = n-1;



//        while(left <right){
//         int mid = left + (right-left)/2;
//         if(mid > minVal){
//             right = mid - 1;
//         } else if(mid < minV)


//         minVal = min(minVal, nums[mid]);

//        }
//     }
// };

/*
 //   // start with a very large number
        // 

        // for(int i = 0; i < n; i++) {
        //     minVal = std::min(minVal, nums[i]);  // use std::min
        // }
        // return minVal;
*/
