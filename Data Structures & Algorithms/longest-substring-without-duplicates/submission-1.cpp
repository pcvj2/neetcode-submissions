class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> substring;
        int l = 0, r = 0;
        int longest = 0;

        for (int r = 0; r < s.length(); r++){

            while (substring.count(s[r])) {
                substring.erase(s[l]);
                l++;
            }
                
            substring.insert(s[r]);
            longest = max(longest, (int)substring.size());
        }

    return longest;
    }

    
    
};
