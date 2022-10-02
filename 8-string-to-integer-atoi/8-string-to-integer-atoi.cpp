class Solution {
public:
    int myAtoi(string s) {
        int32_t total = 0;
        bool isNeg = false;
        int index = 0;
        while (s[index] == ' ') {
            index++;
            if (index > size(s)) {
                return 0;
            }
        }
        if (s[index] == '+' || s[index] == '-') {
            isNeg = s[index] == '-';
            index++;
        }
        while (index < size(s)) {
            if (isdigit(s[index])) {
                if (isNeg && total > INT_MAX / 10) {
                    return (INT_MAX  * -1) - 1;
                }
                if (total > INT_MAX / 10) {
                    return (INT_MAX);
                }
                total *= 10;
                if (isNeg && total > INT_MAX - (s[index] - '0')) {
                    return (INT_MAX  * -1) - 1;
                }
                if (total > INT_MAX - (s[index] - '0')) {
                    return (INT_MAX);
                }
                total += s[index] - '0';
                index++;
            } else {
                break;
            }
        }
        return total * (isNeg ? -1 : 1);
    }
};