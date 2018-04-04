/*
 *Write a function to find the longest common prefix string 
 *amongst an array of string
 ================================================================
 ˼·��
 �����ж������Ƿ�Ϊ�գ����򷵻�0
 ����Ϊ�գ��������и��ַ��������ַ�������һ�Ƚϣ������ͬ������0��
 ����ַ������ַ�����ͬ�����ظ��ַ��������浽�ַ���prefix��
 ================================================================
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
	public:
		string longestCommonPrefix(vector<string> &strs) {
			string prefix = " ";
			if (strs.empty())
				return prefix;
			for (int k = 0; k < strs[0].size(); k++) {  
				int i = 1;
				for (; i < strs.size() && strs[i].size() > k; i++){ 
					if (strs[i][k] != strs[0][k])
						return prefix;
				
					}
					if (i == strs.size())
						prefix += strs[0][k];

			}
			return prefix;


		}

};

int main() {
	string str[] = {"abc", "cda", "abcdd", "abed"};//here is a problem ,this strs returns 0, cannot find the longest common prefix
	vector<string> strs (str, str+4);
	Solution lcp;
	cout << lcp.longestCommonPrefix(strs) << endl;
	return 0;

}

