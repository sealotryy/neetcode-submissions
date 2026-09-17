class Solution {
   public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> my_map;
        // we can create a for loop, with i being the right pointer
        int maxFreq = 0;
        int left = 0;
        int maxLength = 0; 
        for (int i = 0; i < s.size(); i++) {
            // check if in the hash and if not add
            if (my_map.find(s[i]) == my_map.end()) {
                // key is not in the map
                my_map[s[i]] = 1;
            } else {
                // key is in the map so we increment
                my_map[s[i]]++;
            }
            maxFreq = max(maxFreq, my_map[s[i]]);
            // after checking the max freq, we need to check if the window is valid
            if ((i - left + 1) - maxFreq > k) {
                my_map[s[left]]--;  // since we move the window we need to decrease the frequency of
                                    // the letter
                left++;
                // no need to change max freq since we need to keep track of the current max we have
                // seen so far

            }
            maxLength = max(maxLength, i - left + 1);
        
        }
        return maxLength;

    }
};
