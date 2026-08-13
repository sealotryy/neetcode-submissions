class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int largest = 0;
        while (left < right) {
            int floor = min(heights[left], heights[right]);
            int product = floor * (right - left);

            if (product > largest) {
                largest = product;
            }
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return largest;
    }
};
