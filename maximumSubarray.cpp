/*
 * Find the contiguous subarray within an array(containing at
 * least one number) which has the largest sum.
 * For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
 * the contigous subarray [4,-1,2,1] has the largest sum = 6
 * Answer 1: Kadane算法
 * 思路：把数组元素不断往结果里添加，直到sum的值小于0，这时将
 * sum重置为0，同时始终维护一个ans变量，表示子串的和最大值
 * ==========================================================
 * kadane算法的正确性，首先，对于a[1...n],如果a[i...j]就是满足
 * 和最大的子串，那么对于任何k(i<=k<=j),我们有a[i...k]的和大于
 * 0。因为如果存在k使得a[i...j]的和小于0，那么我们就有a[k+1...j]
 * 的和大于a[i...j],这与我们假设的a[i...j]就是a的和最大子串矛盾
 * */

class Solution {
	public:
		int maxSubArray(int A[], int n) {
			//Idea is very simple.Basically,keep adding each integer 
			//to the sequence until the sum drop below 0.If sum is 
			//negative, then should reset the sequence.
			int ret = A[0];
			int sum = 0;

			for (int i = 0; i < n; i++) {
				sum += A[i];
				ret = max(ret, sum);
				sum = max(sum, 0);

			}
			return ret;
		}
}
