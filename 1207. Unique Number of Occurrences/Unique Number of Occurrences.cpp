class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        std::unordered_map<int, int> counts;
        std::unordered_set<int> unique_counts;

        // loop through all elements to create a map
        for (int a : arr)
        {
            counts[a]++;
        }

        // loop through all value to check if unique
        for (auto const &pair : counts)
        {
            if (!unique_counts.insert(pair.second).second)
            {
                return false;
            }
        }
        return true;
    }
};