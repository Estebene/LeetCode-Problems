class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ss;
        int left = 0;
        int right = 0;
        int max_length = 0;
        ss.insert(s[0]);
        while (right < size(s)) {
            while (ss.find(s[right]) != ss.end() && left != right) {
                if (s[left] != s[left + 1]) {
                    ss.erase(s[left]);
                }
                left++;
            }
            if (left != right) {
                ss.insert(s[right]);
            }
            int sl = (right - left) + 1;
            if (sl > max_length) {
                max_length = sl;
            }
            right += 1;
        }
        return max_length;
    }
};