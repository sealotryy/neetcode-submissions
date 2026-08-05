class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen; // number, index
        for(int i=0; i < nums.size(); i++){
            int complement = target - nums[i]; 
            if (seen.find(complement) != seen.end()){
                return {seen[complement], i};
            }

            // complement is not found yet so store current number and its index
            seen[nums[i]] = i; // key is current and value is index 
        }
        return {}; // in case empty
    }
};
