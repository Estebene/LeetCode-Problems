class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = size(strs[0]);
        for (string str: strs) {
            if (size(str) < min) {
                min = size(str);
            }
        }
        string prefix = "";
        for (int i = 0; i < min; i ++) {
            char c = strs[0][i];
            bool isCommon = true;
            for (int j = 1; j < size(strs); j++) {
                if (strs[j][i] != c) {
                    isCommon = false;
                    break;
                }
            }
            if (isCommon) {
                prefix += c;
            } else {
                break;
            }
        }
        return prefix;
    }
};