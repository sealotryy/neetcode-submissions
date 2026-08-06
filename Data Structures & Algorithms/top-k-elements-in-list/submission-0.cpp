class Solution {
public:
    // we can use a hash map to store the frequency
    // after we find the k most frequencies
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;

        // in each iteration number becomes the current element
        for(auto number: nums){ 
            // go into the bucket that counts "number" and increase value by 1
            freq[number]++; 

            // so if we did freq[1]++; 
            // since key = 1 doesn't exist yet it creates it and so we have {1:1}
            // so if we did freq[1]++ again
            // key = 1 already exists so we go into its key and increase it again {1:2}
        }
        
        // what we need to do is create a priority queue heap
        // since we have a hashmap, we have pairs of ints
        std::priority_queue<pair<int,int>> pq; 
        std::vector<int> result; 
        for(auto pair:freq){
            // we push the frequency up so then we sort by freq, not the actual number
            pq.push({pair.second,pair.first}); 
        }
        // however, we WANT the actual number, so we get the pq.second
        for(int i =0; i<k; i++){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result; 
    }
};
