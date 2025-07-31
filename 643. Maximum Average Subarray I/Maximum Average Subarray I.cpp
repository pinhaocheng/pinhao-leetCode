class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        // Use double for precision
        double window_sum = 0.0;

        // Calculate the sum of the first 'k' elements
        for (int j = 0; j < k; j++)
        {
            window_sum += nums[j]; // Using '+=' is a common C++ shorthand
        }

        // The first window's sum is our starting maximum
        double max_sum = window_sum;

        // Loop from k to the end of the array
        for (int i = k; i < nums.size(); i++)
        {
            // Update the window sum
            window_sum = window_sum + nums[i] - nums[i - k]; // Add new element, subtract old one

            // Update the max_sum if the new window_sum is larger
            max_sum = std::max(max_sum, window_sum); // std::max is a helpful C++ function
        }

        // Calculate and return the maximum average
        return max_sum / k; // Divide by k to get the average
    }
};