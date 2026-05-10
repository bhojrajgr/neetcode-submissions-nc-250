class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
       int low = 1, high = *max_element(piles.begin(), piles.end());
       while(low < high) {
        int mid = low + (high-low) / 2;
        long long hours = 0;
        for(int pile : piles) {
            hours += (pile + mid - 1) / mid; // ceil(pile/mid)
        }
        if(hours <= h) {
            high = mid;
        } else {
            low = mid + 1;
        }
       }
       return low;
    }
};

/*⚡ Dry Run Example
piles = [1,4,3,2], h = 9

low = 1, high = 4

mid = 2 → hours = ceil(1/2)+ceil(4/2)+ceil(3/2)+ceil(2/2) = 1+2+2+1 = 6 → feasible ✅

Shrink → high = 2

mid = 1 → hours = 1+4+3+2 = 10 → not feasible ❌

So final answer = low = 2.*/
