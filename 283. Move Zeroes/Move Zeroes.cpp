class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int insert_pos = 0;
        // First pass: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                nums[insert_pos] = nums[i];
                insert_pos++;
            }
        }

        // Second pass: Fill the rest with zeros
        for (int j = insert_pos; j < nums.size(); ++j)
        {
            nums[j] = 0;
        }
    }
};