#include <vector>
#include <unordered_map>

class Solution
{
public:
    int maxOperations(std::vector<int> &nums, int k)
    {
        // Sort the entire vector in ascending order
        std::sort(nums.begin(), nums.end());

        // Initialize a counter for the number of operations
        int success = 0;

        // Initialize two pointers, one at the start and one at the end of the vector
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            if (nums[left] + nums[right] == k)
            {
                success++;
                left++;
                right--;
            }
            else if (nums[left] + nums[right] < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return success;
    }
};
