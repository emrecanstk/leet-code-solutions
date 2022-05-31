'''
https://leetcode.com/problems/search-insert-position/

  Given a sorted array of distinct integers and a target value, return the index if the target is found.
  If not, return the index where it would be if it were inserted in order.

  Example 1:
    Input: nums = [1,3,5,6], target = 5
    Output: 2
  
  Example 2:
    Input: nums = [1,3,5,6], target = 2
    Output: 1

  Example 3:
    Input: nums = [1,3,5,6], target = 7
    Output: 4

'''

class Solution(object):
    def searchInsert(self, nums, target):
        
        i,result = 0,0
        
        while i<len(nums):
            if target == nums[i]:
                result = i
            if target > nums[i]:
                result = i+1
                
            i+=1
        
        return result