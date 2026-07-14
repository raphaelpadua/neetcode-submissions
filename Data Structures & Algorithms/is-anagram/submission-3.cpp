class Solution {
public:
    bool isAnagram(string s, string t) {
        //If lengths differ
        if (s.length() != t.length()) {
            return false;
        }

        //Keep track of each letter that shows up in both strings
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};