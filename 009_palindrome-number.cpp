/*
判断一个整数是否回文

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:
Input: 121
Output: true

Example 2:
Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(!x)
            return true;
        int temp = x;
        int res = 0;
        while(x > 0)
        {
            if(res > INT_MAX/10)
                return false;
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res == temp);
    }
};
