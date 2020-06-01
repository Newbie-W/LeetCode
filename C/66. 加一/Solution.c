/*
执行用时 :4 ms, 在所有 C++ 提交中击败了53.07%的用户
内存消耗 :6.6 MB, 在所有 C++ 提交中击败了100.00%的用户
*/
/*
用例：
[1,2,3]
[1,9,9]
[9,9]
[4,3,2,1]
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        bool flag = true;
        for (int i=0; i<len; i++) {
            if (digits[i] != 9) {
                flag = false;
            }
        }
        if (flag) {
            digits.push_back(0);
            len++;
            digits[0] = 1;
            for (int i=1; i<len-1; i++) {
                digits[i] = 0;
            }
            return digits;
        }
        int i = len-1;
        digits[i] = (digits[i]+1) % 10;
        while (digits[i] == 0) {
            if (digits[i] == 0) {
                digits[i-1] = (digits[i-1]+1) % 10;
            }
            i--;
        }
        return digits;
    }
};
