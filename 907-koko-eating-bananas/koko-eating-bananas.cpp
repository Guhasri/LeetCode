class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int greatest = *max_element(piles.begin(), piles.end());  // Get the largest pile size
        int smallest = 1;  // Minimum speed is 1 banana per hour
        int ans = greatest;

        while (smallest <= greatest) {
            int mid = smallest + (greatest - smallest) / 2;
           long long hours = 0;  // Use long long to handle large sums
        for (int pile : piles) {
            hours += (pile + mid - 1) / mid;  // This is equivalent to ceil(pile / k)
        }

            if (hours <= h) {
                ans = mid;  // We can eat all piles within h hours with speed `mid`
                greatest = mid - 1;  // Try a smaller speed
            } else {
                smallest = mid + 1;  // We need a larger speed to eat all piles in `h` hours
            }
        }

        return ans;
    }
};