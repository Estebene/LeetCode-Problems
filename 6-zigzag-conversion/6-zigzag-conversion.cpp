class Solution {
public:
    string convert(string s, int numRows) {
        int mod = (numRows - 1) * 2;
        if (mod == 0) {
            mod = 1;
        }
        int index = 0;
        vector<string> ss(numRows);
        for (char c: s) {
            if (index % mod == 0) {
                ss[0].push_back(c);
            } else {
                int num = index % mod;
                if (num > mod / 2) {
                    num = mod - num;
                }
                ss[num].push_back(c);
            }
            index ++;
        }
        string ns = "";
        for (int n = 0; n < numRows; n++) {
            ns += ss[n];
        }
        return ns;
    }
};