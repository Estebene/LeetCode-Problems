class Solution {
public:
    bool isValid(string s) {
        vector<char> stack = {};
        string::iterator it;
        for (it = s.begin(); it != s.end(); it++) {
            if (*it == '(' || *it == '{' || *it == '[') {
                stack.push_back(*it);
            } else {
                if (size(stack) == 0) {
                    return false;
                }
                if (*it == ')' && stack.back() != '(') {
                    return false;
                }
                if (*it == '}' && stack.back() != '{') {
                    return false;
                }
                if (*it == ']' && stack.back() != '[') {
                    return false;
                }
                stack.pop_back();
            }
        }
        
        return size(stack) == 0;
    }
};