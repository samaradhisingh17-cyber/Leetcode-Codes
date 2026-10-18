class Solution {
public:
    int countDigits(int num) {
        int digit, n = num;
        int count = 0;
        while (n > 0) {
            digit = n % 10;
            if (digit != 0 && num % digit == 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};