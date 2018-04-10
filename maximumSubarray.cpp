/*
 * Find the contiguous subarray within an array(containing at
 * least one number) which has the largest sum.
 * For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
 * the contigous subarray [4,-1,2,1] has the largest sum = 6
 * Answer 1: Kadane�㷨
 * ˼·��������Ԫ�ز������������ӣ�ֱ��sum��ֵС��0����ʱ��
 * sum����Ϊ0��ͬʱʼ��ά��һ��ans��������ʾ�Ӵ��ĺ����ֵ
 * ==========================================================
 * kadane�㷨����ȷ�ԣ����ȣ�����a[1...n],���a[i...j]��������
 * �������Ӵ�����ô�����κ�k(i<=k<=j),������a[i...k]�ĺʹ���
 * 0����Ϊ�������kʹ��a[i...j]�ĺ�С��0����ô���Ǿ���a[k+1...j]
 * �ĺʹ���a[i...j],�������Ǽ����a[i...j]����a�ĺ�����Ӵ�ì��
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
