
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        for (auto i = nums.begin(); i != nums.end(); i++) {
            // Use std::count to count occurrences of *i in the array
            if (std::count(nums.begin(), nums.end(), *i) == 1) {
                return *i;  // Return the number itself (not the iterator)
            }
        }
        return 0;  // Return 0 if no single number is found (though this case shouldn't happen as per problem statement)
    }
};
