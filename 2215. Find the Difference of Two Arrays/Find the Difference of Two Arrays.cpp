class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> set2(nums2.begin(), nums2.end());

        std::vector<int> diff1;
        std::vector<int> diff2;

        // Loop through each number ("num") in set1.
        for (int num : set1)
        {
            // Check if the number does NOT exist in set2.
            if (set2.count(num) == 0)
            {
                // If it's not in set2, add it to our result list.
                diff1.push_back(num);
            }
        }

        for (int num : set2)
        {
            if (set1.count(num) == 0)
            {
                diff2.push_back(num);
            }
        }

        return {diff1, diff2};
    };
};