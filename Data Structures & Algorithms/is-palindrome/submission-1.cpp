class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0; 
        int right = s.size() -1; // -1 to account for index

        // case insensitive, change string to lower
        for (char& c : s) {
            c = tolower(c);
        }

        // isalum is needed to skip over spaces as it checks for letter or digits
        while(left <= right){ 
            if (left <= right && !isalnum(s[left])){
                left++; 
                continue;
            }
            if (left <= right && !isalnum(s[right])){
                right--; 
                continue; 
            }
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true; 
        

        
    
    }
};
