class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        const int max_candies = *std::max_element(candies.begin(), candies.end());

        std::vector<bool> result(candies.size());

        for (size_t i = 0; i < candies.size(); ++i){
            result[i] = (candies[i] + extraCandies >= max_candies);
        }

        return result;
    }
};