class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int minLen = INT_MAX;
        int sum = 0, l = 0;

        for (int r = 0; r < n; r++) {
            sum += arr[r];
            while (sum >= target) {
                minLen = min(minLen, r - l + 1);
                sum -= arr[l];
                l++;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& arr) {
//         int maxLen = 0, l = 0, r = 0, sum = 0;
//         int n = arr.size();
//         while(r < n){
//              sum = sum + arr[r];
//              if(sum > target) {
//                 sum = sum - arr[l];
//                 l++;
//              }
//              if(sum <= target) {
//                 maxLen = max(maxLen, r - l + 1);
//                 r++;
//              }
//         }
//         return maxLen;
//     }
// };