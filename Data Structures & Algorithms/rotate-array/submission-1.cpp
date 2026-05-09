class Solution {
public:
   void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    int count = 0;

    for(int start = 0; count < n; start++) {
        int current = start;
        int prev = nums[start];

        do {
            int next = (current + k) % n;
            swap(nums[next], prev);
            current = next;
            count++;
        } while(start != current);
      }
    }
};



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %= n;  //handle k > n
        
//         reverse(nums.begin(), nums.end());

//         reverse(nums.begin(), nums.begin()+k);

//         reverse(nums.begin() + k, nums.end());
//     }
// };