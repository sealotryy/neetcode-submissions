class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    // insert into hash set
    std::unordered_set<int> numbers; 
    for(int num: nums){
        numbers.insert(num); 
    }

    int longest = 0; 

    // check if beginning of sequence
    for(int num: nums){
        if(numbers.count(num - 1) == 0){
            int currlen = 1; 
            int currnum = num; 
            while (numbers.count(currnum + 1)){
                currlen++; 
                currnum++; 
            }
            if(currlen > longest){
                longest = currlen; 
            }
        }
        
    }
    return longest; 

    }
};
