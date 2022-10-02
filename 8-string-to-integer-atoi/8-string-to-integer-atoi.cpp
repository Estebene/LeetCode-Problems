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
                int num = s[index] - '0';
                if (total < -INT_MAX / 11) {
                     if ((total) < (-(INT_MAX - num) / 10)) {
                        return isNeg ? (INT_MAX  * -1) - 1 : (INT_MAX); 
                    }
                }
                total *= 10;
                total -= num;
                index++;
            } else {
                break;
            }
        }
        return total * (isNeg ? 1 : -1);
    }
};