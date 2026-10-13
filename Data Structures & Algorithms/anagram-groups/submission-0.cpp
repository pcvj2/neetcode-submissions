class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const string& word : strs) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }

            string key;

            for (int count : freq) {
                key += to_string(count);
                key += "#";
            }

            groups[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        return result;
    }
};