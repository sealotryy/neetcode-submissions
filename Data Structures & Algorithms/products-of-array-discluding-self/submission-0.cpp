class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> left;
        left.push_back(1);
        std::vector<int> right;
        right.push_back(1);
        std::vector<int> result;

        if (nums.empty()) {
            return result;
        }
        // calculate the left prefix array
        int product_left = 1;
        for (int i = 1; i < nums.size(); i++) {
            // start at 1 since leftmost is 1 anyways
            product_left = product_left * nums[i - 1];
            left.push_back(product_left);
        }

        int product_right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            right.push_back(product_right);
            product_right *= nums[i];
        }
        reverse(right.begin(), right.end());

        for (int i = 0; i < nums.size(); i++) {
            result.push_back(left[i] * right[i]);
        }

        return result;
    }
};
