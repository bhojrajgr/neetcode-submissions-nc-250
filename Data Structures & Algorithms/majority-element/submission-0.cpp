#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();

        // Count frequencies
        for (int num : nums) {
            freq[num]++;
            // If any element crosses n/2, return immediately
            if (freq[num] > n / 2) {
                return num;
            }
        }

        return -1; 
    }
};