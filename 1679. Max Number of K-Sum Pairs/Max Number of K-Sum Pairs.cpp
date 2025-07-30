#include <vector>
#include <unordered_map>

class Solution
{
public:
    int maxOperations(std::vector<int> &nums, int k)
    {
        // 1. Initialize an unordered_map and an operations counter.
        // Declares a map named 'frequencies' where keys are integers // and values are also integers.
        std::unordered_map<int, int> frequencies;
        int success = 0;

        // 2. Loop through the nums vector.
        for (int num : nums)
        {
            int complement = k - num;
            // First, check if the key 'complement' exists in the map
            // AND if its count is more than 0.
            // Apparently this is called a short circuit
            // It's a way to check if the key exists and if it does, it's greater than 0
            // If it doesn't exist, it doesn't check the second condition
            if (frequencies.count(complement) && frequencies[complement] > 0)
            {
                // If it does, we found a pair!
                // Decrement the count of the complement since we've "used" it.
                frequencies[complement]--;
                success++;
            }
            else
            {
                // This current `num` did not find a partner.
                // So, we add it to the map to be a partner for a future number.
                frequencies[num]++;
            }
        }
        // 3. Return the counter.
        return success;
    }
};
