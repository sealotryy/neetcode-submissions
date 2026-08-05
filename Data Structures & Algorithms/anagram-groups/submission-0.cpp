class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> result; 

        // it is not std::unordered_map<vector<string>, vector<vector<string>>> anagrams;
        // a hash map is unordered_map<KEY, VALUE>
        // our key is the sorted version of the word, and the value would be a vector of strings 
        std::unordered_map<string, vector<string>> anagrams; 
        
        for(auto word: strs){
            // word is the copy, we need to create a sorted key
            // sort the key
            std::string key = word; 
            std::sort(key.begin(), key.end()); 

            // since we have unordered_map<<string>, vector<string>> anagrams; 
            // and key -> value so anagrams["aet"] = ["eat", "tea"]
            // anagrams[word] would give us the vector associated with that key 
            
            // when we do anagrams[word] then we create a new key if it doesn't exist
            // if it does exist, then we access it
            anagrams[key].push_back(word); 
        }
        for(auto pair: anagrams){
            result.push_back(pair.second);
        }
        return result; 
    }
};
