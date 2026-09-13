#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> str_map; 
        int max_len = 0;
        int left = 0; 

        for (int i = 0; i < s.size(); i++) { 
            char c = s[i];

            // If we've seen this character, jump left past its last seen position
            if (str_map.find(c) != str_map.end()) {
                left = std::max(left, str_map[c] + 1);
            }

            // Update the character's most recent position
            str_map[c] = i; 

            // Calculate window length
            max_len = std::max(max_len, i - left + 1);
        }

        return max_len;
    }
};