class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low < high) {
            int mid = low + (high-low) / 2;
            int daysUsed = 1, currentLoad = 0;

            for(int w : weights) {
                if(currentLoad + w > mid){
                    daysUsed++;
                    currentLoad = 0;
                }
                currentLoad += w;
            }

            if(daysUsed <= days) {
                high = mid; // try smaller capacity
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

/*⚡ Dry Run Example
weights = [2,4,6,1,3,10], days = 4

low = 10, high = 26

mid = 18 → simulate:

Day1: [2,4,6,1,3] = 16

Day2: [10] = 10
→ 2 days used ≤ 4 → feasible ✅

Shrink → high = 18

mid = 14 → simulate:

Day1: [2,4,6] = 12

Day2: [1,3,10] = 14
→ 2 days ≤ 4 → feasible ✅

Shrink → high = 14

mid = 12 → simulate:

Day1: [2,4,6] = 12

Day2: [1,3] = 4

Day3: [10] = 10
→ 3 days ≤ 4 → feasible ✅

Shrink → high = 12

mid = 11 → simulate:

Day1: [2,4] = 6

Day2: [6,1,3] = 10

Day3: [10] = 10
→ 3 days ≤ 4 → feasible ✅

Shrink → high = 11

mid = 10 → simulate:

Day1: [2] = 2

Day2: [4,6] = 10

Day3: [1,3] = 4

Day4: [10] = 10
→ 4 days = 4 → feasible ✅

Shrink → high = 10

Now low = 10, high = 10 → answer = 10.*/