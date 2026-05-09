// // Using Boyer-Moore voting Algorithm
class Solution {
    public: 
       int majorityElement(vector<int>& nums) {
        int cand = 0, count = 0;
        for(int num : nums) {
            if(count == 0) cand = num;
            count += (num == cand) ? 1 : -1;
        }
        return cand;
       }
};


// Using a map

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> freq;
//         int n = nums.size();

//         // Count frequencies
//         for (int num : nums) {
//             freq[num]++;
//             // If any element crosses n/2, return immediately
//             if (freq[num] > n / 2) {
//                 return num;
//             }
//         }

//         return -1; 
//     }
// };