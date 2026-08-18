class Solution {
public:
    bool isAnagram(string s, string t) {
        // Early exit if lengths don't match
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> freq(26, 0);

        // Count characters from s and subtract for t
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : t) {
            freq[c - 'a']--;
        }

        // Verify all character counts balance to 0
        for (int count : freq) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};