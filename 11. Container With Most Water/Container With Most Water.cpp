class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        int max_area = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right)
        {
            // 1. Calculate the current width and area.
            int width = right - left;
            int h = std::min(height[left], height[right]);
            int current_area = width * h;

            // 2. A cleaner way to update max_area.
            max_area = std::max(max_area, current_area);

            // 3. Move the pointer of the shorter line inward.
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--; // Decrement to move inward from the end!
            }
        }

        return max_area;
    }
};