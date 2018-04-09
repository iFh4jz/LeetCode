/*
 *Given an array and a value, remove all instances of that value
 *in-place and return the new length.
 *Do not allocate extra space for another array, you must do this
 *by modifying the input array in-place with O(1) extra memory.
 *The order of elements cna be changed.It doesn't matter what you
 *leave beyond the new length.
 *Example:
 * Given nums = [3,2,2,3],val = 3,
 * Your function should return length = 2, with the first elements
 * of nums being 2.
**/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int removeElement(vector<int>& nums, int val) {
			int length = 0;
			for (int i = 0; i < nums.size(); i++)
				if (nums[i] != val)
					nums[length++] = nums[i];
			return length;
		}
};

int main() {
	int array[] = {3,2,2,1,5,2};
	vector<int> nums (array, array+6);
	int val = 3;
	Solution rem;
	cout << rem.removeElement(nums, val) << endl;
	return 0;
}
