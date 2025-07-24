class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num; // Update first to the smallest value
            } else if (num <= second) {
                second = num; // Update second to the second smallest value
            } else {
                // If we find a number greater than both first and second, we have a triplet
                return true;
            }
        }
        return false; // No increasing triplet found
    }
};