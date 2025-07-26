class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int slow = 0;
        // The fast pointer is our main loop iterator
        for (int fast = 0; fast < nums.size(); ++fast)
        {
            // When the fast pointer finds a non-zero element...
            if (nums[fast] != 0)
            {
                // ...swap it with the element at the slow pointer
                std::swap(nums[slow], nums[fast]);
                // And advance the slow pointer
                slow++;
            }
        }
    }
};