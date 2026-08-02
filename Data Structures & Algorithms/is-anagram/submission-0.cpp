class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.empty() && t.empty()){return true;}
        if(s.empty()){return false;}
        if(t.empty()){return false;}
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        if(s != t){
            return false;
        }
        else{return true;}
    }
};
