/*
https://leetcode.com/problems/sort-colors/

  Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
  with the colors in the order red, white, and blue.
  We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
  You must solve this problem without using the library's sort function.

  Example 1:
    Input: nums = [2,0,2,1,1,0]
    Output: [0,0,1,1,2,2]
    
  Example 2:
    Input: nums = [2,0,1]
    Output: [0,1,2]

*/

void sortColors(int* nums, int numsSize){
    
    int i,j;
    
    for(i=0;i<numsSize;i++) {
        
        for(j=0;j<numsSize-1;j++) {     // bubble sort
            
            if(nums[j+1] < nums[j]) {
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}