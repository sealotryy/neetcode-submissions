class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        // create frequency map
        std::unordered_map<char, int> myMap;
        int left = 0;
        // put s1 into map
        for (int i = 0; i < s1.size(); i++) {
            myMap[s1[i]]++;
        }

        // create the frequency map for sliding window
        // if we had created the map inside of the loop below then we'd be creating a new map from
        // scratch every time however we can just update the map
        std::unordered_map<char, int> windowMap;

        for (int right = 0; right < s2.size(); right++) {
            // add new character
            windowMap[s2[right]]++;

            // remove old character if the window is too big
            if (right - left + 1 > s1.size()) {
                char removed = s2[left];
                windowMap[removed]--;

                if (windowMap[removed] == 0) {
                    windowMap.erase(removed);
                }
                left++;
            }

            // cpp is able to directly compare hashmaps
            if (windowMap == myMap) {
                return true;
            }
        }
        return false;
    }
};
