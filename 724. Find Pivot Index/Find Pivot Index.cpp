class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        const auto overall_sum = std::accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        for (int pivot = 0; pivot < nums.size(); pivot++)
        {
            int right_sum = overall_sum - left_sum - nums[pivot];
            if (left_sum == right_sum)
            {
                return pivot;
            }
            left_sum += nums[pivot];
        }
        return -1;
    }
};