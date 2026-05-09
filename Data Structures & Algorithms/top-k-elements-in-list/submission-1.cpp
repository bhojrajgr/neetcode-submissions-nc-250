// //Sol 2: Using BucketSort
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        // Buckets: index = frequency, value = list of numbers
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto& [num, count] : freq) {
            bucket[count].push_back(num);
        }
        
        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};
// //Sol 1: Using minHeap
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> freq;
//         for (int num : nums) {
//             freq[num]++;
//         }
        
//         // Min-heap: pair<frequency, element>
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        
//         for (auto& [num, count] : freq) {
//             minHeap.push({count, num});
//             if (minHeap.size() > k) {
//                 minHeap.pop();
//             }
//         }
        
//         vector<int> result;
//         while (!minHeap.empty()) {
//             result.push_back(minHeap.top().second);
//             minHeap.pop();
//         }
//         return result;
//     }
// };