class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st; 
        int ans = 0;
        int i = 0, j = 0;

        while (i < s.size()) {
            if (!st.count(s[i])) {
                st.insert(s[i]);
                ans = max(ans, (int)st.size());
                i++;
            } else {
                st.erase(s[j]);
                j++;
            }
        }

        return ans;
    }
};
