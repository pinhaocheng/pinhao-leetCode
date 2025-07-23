class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> answer(nums.size(), 0);
        int right = 1;

        answer[0] = 1;

        for(int i = 1; i < nums.size(); ++i){
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        for(int i = nums.size() - 1; i >= 0; --i){
            answer[i] *= right;
            right *= nums[i];
        }

        return answer;
    
    }
};