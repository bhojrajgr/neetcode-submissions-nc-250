class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // ✅ 1-indexed
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> res;
//         for (int i = 0; i < numbers.size(); i++) {
//             for (int j = i + 1; j < numbers.size(); j++) {
//                 if (numbers[i] + numbers[j] == target) {
//                     res.push_back(i+1);
//                     res.push_back(j+1);
//                     return res; // return immediately after finding the pair
//                 }
//             }
//         }
//         return res; // empty if no pair found
//     }
// };