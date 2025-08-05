#include <vector>    // For std::vector
#include <algorithm> // Needed for std::max

class Solution
{
public:
    int longestSubarray(std::vector<int> &nums)
    {
        int left = 0;
        int zero_count = 0;
        int max_length = 0;

        for (int right = 0; right < nums.size(); ++right)
        {
            if (nums[right] == 0)
            {
                zero_count++;
            }

            while (zero_count > 1)
            {
                if (nums[left] == 0)
                {
                    zero_count--;
                }
                left++;
            }
            max_length = std::max(max_length, right - left);
        }
        return max_length;
    }
};