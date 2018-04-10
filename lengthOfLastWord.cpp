/*
 * Given s string s consists of upper/lower-case alphabets and
 * empty sapce characters ' ', return the length of last word
 * in the string.
 * If the last word does not exits, return 0
 * Note: A word is defined as a character sequence consists of 
 * non-space characters only.
 * Example:
 * Input : "Hello World"
 * Output: 5
 * ====================================================================
 * The basic idea is very simple.Start from the tail of s and move 
 * backwards to find the nono-space character.Then from this character,
 * move backwards and count the number of non-sapce characters until we
 * pass over the head of s or meet a space character.The count will then 
 * be the length of the last word.
 * ====================================================================
 * */

class Solution {
	public:
		int lengthOfLastWord(string s) {
			int len = 0, tail = s.length() - 1;
			while (tail >= 0 && s[tail] == " ") 
				tail--;
			while (tail >= 0 && s[tail] != ' ') {
				len++;
				tail--;
			}
			return len;
		}
};
