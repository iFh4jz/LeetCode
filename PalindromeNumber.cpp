/*
 *Determine whether an integer is a palindrome. Do this without extra sapce
 =============
 ��ĿҪ����ʹ�ö���ռ䣬����ȡ�������λ�����λ�Ƚϣ�����һ��base Ϊ10 ^ n,
 ����ȡ���������λ��ÿ��ѭ������100����Ϊÿ����ȥ��λ
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
