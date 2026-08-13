class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = numbers.size()-1; 
         
        while(left < right){
            int calc = numbers[left] + numbers[right];
            
            if (calc == target){
                return{left + 1,right + 1};
            }
            if (calc < target){
                left++;
                continue;
            }
            if (calc > target){
                right--;
                continue; 
            }
        }
    }
};
