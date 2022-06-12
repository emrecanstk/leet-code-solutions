// https://leetcode.com/problems/find-greatest-common-divisor-of-array/
//
//   Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.
//   The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
//   
//   Example 1:
//     Input: nums = [2,5,6,9,10]
//     Output: 2
//     Explanation:
//       The smallest number in nums is 2.
//       The largest number in nums is 10.
//       The greatest common divisor of 2 and 10 is 2.
// 
//   Example 2:
//     Input: nums = [7,5,6,8,3]
//     Output: 1
//     Explanation:
//       The smallest number in nums is 3.
//       The largest number in nums is 8.
//       The greatest common divisor of 3 and 8 is 1.

class Solution {
    public int findGCD(int[] nums) {
        
        
        int min = nums[0];
        int max = nums[0];
        int i = 0;
        
        while(i < nums.length) {
            
            if(nums[i]<min) {min = nums[i];}
            if(nums[i]>max) {max = nums[i];}
            i++;
            
        }
        
        i = 1;
        int result=0;
        
        while(i <= max) {
            if(min%i == 0 && max%i == 0) {result = i;}
            i++;
        }
        
        return result;
        
    }
}