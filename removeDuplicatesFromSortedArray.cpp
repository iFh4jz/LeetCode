/*
 * Given a sorted array, remove the duplicates in-place such that each element
 * appear only once and return the new length
 * Do not allcocate extra space for another array, you must do this by 
 * modifying the input array in-place with O(1) extra memory
 * Example :
 * Given nums = [1,1,2],
 * Your function should return length = 2, with the first two elements of nums
 * being 1 and 2 respectively. It doesn't matter what you leave beyonf the new 
 * length.
 * */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {
			if (nums.size() < 2)
				return nums.size();
			int length = 1;
			for (int i = 1; i < nums.size(); i++) {
				if (nums[i] != nums[i-1])
					nums[length++] = nums[i];
			}
			return length;
		}
};

int main() {
	int a[] = {1, 1, 2, 2, 2, 3, 5, 5, 5, 5, 5, 9};
	vector<int> nums (a, a+12);
	Solution rem;
	cout << rem.removeDuplicates(nums) << endl;
	return 0;
}

