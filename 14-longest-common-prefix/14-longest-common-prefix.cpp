class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string prefix = "";
        while (true) {
            if (size(strs[0]) == i) {
                break;
            }
            char c = strs[0][i];
            cout << c;
            bool isCommon = true;
            for (int j = 1; j < size(strs); j++) {
                if (size(strs[j]) == i) {
                    isCommon = false;
                    break;
                }
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
            i ++;
        }
        return prefix;
    }
};