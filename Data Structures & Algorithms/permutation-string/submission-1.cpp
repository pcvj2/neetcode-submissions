class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int windowSize = s1.length();

                if (s1.length() > s2.length()) {
            return false;
        };

        vector<int> target(26, 0);
        vector<int> window(26, 0);

        for (char c : s1) {
            target[c - 'a']++;
        };

        for (int i = 0; i < windowSize; i++) {
            window[s2[i] - 'a']++;
        }

        if (window == target) {
            return true;
        }

        for (int right = windowSize; right < s2.length(); right++) {
            window[s2[right] - 'a']++;
            window[s2[right - windowSize] - 'a']--;

            if (window == target) {
            return true;
            }

        }

        return false;
    }
};
