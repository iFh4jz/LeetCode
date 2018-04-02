/*
 *Given an array of integers, return indices of the two numbers
 *such that they add up to a specific target.
 *You may assume that each input would have exactly one solution
 *Examle:
 *Given nums = [2, 7, 11, 15], target = 9,
 *Because nums[0] + nums[1] = 2 + 7 =9,
 * return [0, 1].
 * =====================
 * //˼·����
 * =====================
 *���ù�ϣ�����map����
 *��������numbers�е�ÿһ����numbers[i]
 *�ж�target - numbers[i]�ڲ��ڹ�ϣ����
 *����ھͷ�������������λ��
 *���ھͼ���������, ͬʱ����ǰ�������뵽��ϣ����
*/ 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int> &numbers, int target)
{
	//key is the number and value is its index in the vector.
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < numbers.size(); i++) {
				int numberToFind = target - numbers[i];
			//if numberToFind is found in map, return them
				if (hash.find(numberToFind) != hash.end()){
					//+1 because indices are NOT zero based
						result.push_back(hash[numberToFind]);
						result.push_back(i);
						return result;
				}
			//number was not found. Put it in the map.
				hash[numbers[i]] = i;
		}
		return result;
	}
};

int main()
{
	int a[4] = {2, 7, 11, 15};
	vector<int> numbers (a, a+4);
	int target = 9;
	Solution solu = Solution();
	cout << "[ " << solu.twoSum(numbers, target)[0] << " ,"
		 << solu.twoSum(numbers, target)[1] << " ]" << endl;

}

