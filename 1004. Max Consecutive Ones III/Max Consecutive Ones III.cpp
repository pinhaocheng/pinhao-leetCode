#include <algorithm> // Needed for std::max

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxLength = 0;
        int left = 0;
        int zeroCount = 0;

        for (int right = 0; right < nums.size(); ++right)
        {
            if (nums[right] == 0)
            {
                zeroCount++;
            }

            while (zeroCount > k)
            {
                if (nums[left] == 0)
                {
                    zeroCount--;
                }
                left++;
            }
            maxLength = std::max(right - left + 1, maxLength);
        }
        return maxLength;
    }
};