
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> uset;
        int ans =0, i=0, j=0;
        
        while (i<n && j<n) {
            if(uset.find(s[j]) == uset.end()) {
                uset.insert(s[j++]);
                ans = max(ans, j-i);
            }
            else {
                uset.erase(s[i++]);
            }
        }
        return ans;
    }
};
