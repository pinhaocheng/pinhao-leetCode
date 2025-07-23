class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> left_products(nums.size(), 0);
        std::vector<int> right_products(nums.size(), 0);
        std::vector<int> answer(nums.size(), 0);

        left_products[0] = 1;
        right_products[nums.size() - 1] = 1;

        for(int i = 1; i < nums.size(); ++i){
            left_products[i] = left_products[i - 1] * nums[i - 1];
        }

        for(int i = nums.size() - 2; i >= 0; --i){
            right_products[i] = right_products[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < nums.size(); ++i) {
            answer[i] = left_products[i] * right_products[i];
        }

        return answer;
    
    }
};