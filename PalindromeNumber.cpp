/*
 *Determine whether an integer is a palindrome. Do this without extra sapce
 =============
 题目要求不能使用额外空间，这里取数字最高位和最低位比较，设置一个base 为10 ^ n,
 用来取出数的最高位，每次循环除以100，因为每次消去两位
*/
#include <iostream>
using namespace std;

class Solution {
public:
       bool isPalindrome(int x)  {
           if (x < 0)
               return false;
           if (x < 10)
               return true;
           int base = 1;
           while (x / base >= 10) {
            base *= 10;
           }
           while (x) {
                int leftDigit = x / base;
                int rightDigit = x % 10;
                if (leftDigit != rightDigit) {
                    return false;
                }
                x -= base * leftDigit;
                base /= 100;
                x /= 10;
           }
           return true;

       }
    
};

int main() {
    int x = 0;
    Solution Pal = Solution();
    cin >> x;
    cout << x << endl;
    cout << Pal.isPalindrome(x) << endl;
}
