/*
 * Implement strStr()
 * Return the index of the first occurrence of needle in haystack,
 * or -1 if needle is not part of haystack.
 * Example 1:
 * Input: haystack = "hello" needle = "l1"
 * Output: 2
 * Example 2:
 * Input: haystack = "aaaa" needle = "bba"
 * Output: -1
 * */
#include <iostream>
#include <string>
using namespace std;

class Solution {
	public:
		int strStr(string haystack, string needle) {
			int m = haystack.length(), n = needle.length();
			if (!n)
				return 0;
			for (int i = 0; i < m - n + 1; i++) {
				int j = 0;
				for (; j < n; j++)
					if (haystack[i + j] != needle[j])
						break;
				if (j == n)
					return i;
			}
			return -1;
		}
};

int main() {
	string haystack = "abbaifh4jz";
	string needle = "ifh4jz";
	Solution str;
	cout << str.strStr(haystack, needle) << endl;
}
