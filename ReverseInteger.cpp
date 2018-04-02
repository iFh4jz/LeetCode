/*
Given a 32-bit signed integer, reverse digits of an integer.
Example 1:

Input: 123
Output: 321

Example 2:

Input: -123
Output: -321

Example 3£º

Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only
hold integers within the 32-bit signed integer range.For the
purpose of this problem, assume that your function returns 0 
when the reversed integer overflows.
*/
#include <iostream>
using namespace std;

class Solution{
public:
	int reverse(int x){
		int ans = 0;
		while (x) {
			int temp = ans * 10 + x % 10;
			if (temp / 10 != ans) //here is why this code checks overflow
				return 0;
			ans = temp;
			x /= 10;
		}
		return ans;
	}
};

int main(){
	int x = 0;
	cin >> x;
	Solution ans = Solution();
	int y = ans.reverse(x);
	cout << x << endl;
	cout << y << endl;
}

