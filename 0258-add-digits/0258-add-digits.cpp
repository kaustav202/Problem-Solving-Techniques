class Solution {
public:
    int addDigits(int num) {
         int res = num % 9;
        return (res != 0 || num == 0) ? res : 9;
    }
};