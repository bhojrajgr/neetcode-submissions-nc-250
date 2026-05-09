class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - 1;
        
        // Shrink the window until its size becomes k
        while (right - left + 1 > k) {
            if (abs(arr[left] - x) > abs(arr[right] - x)) {
                left++;   // drop left element
            } else {
                right--;  // drop right element
            }
        }
        
        // Now [left, right] is the window of size k
        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};