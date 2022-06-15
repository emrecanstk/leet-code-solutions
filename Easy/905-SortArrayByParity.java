// https://leetcode.com/problems/sort-array-by-parity/

//   Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
//   Return any array that satisfies this condition.

//   Example 1:
//     Input: nums = [3,1,2,4]
//     Output: [2,4,3,1]
//     Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

//   Example 2:
//     Input: nums = [0]
//     Output: [0]


class Solution {
    public int[] sortArrayByParity(int[] nums) {
        
       int j,i;
        
        for(j=nums.length;j>=0;j--) {
            for(i=0;i<j-1;i++) {
                if(nums[i]%2==1) {
                    int temp = nums[i];
                    nums[i] = nums[i+1];
                    nums[i+1] = temp;
                }
            }
        }
        
        return nums;
    }
}