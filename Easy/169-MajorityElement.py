'''
https://leetcode.com/problems/majority-element/
  
  Given an array nums of size n, return the majority element.
  The majority element is the element that appears more than ⌊n / 2⌋ times.
  You may assume that the majority element always exists in the array.

  Example 1:
    Input: nums = [3,2,3]
    Output: 3

  Example 2:
    Input: nums = [2,2,1,1,1,2,2]
    Output: 2

'''

class Solution(object):
    def majorityElement(self, nums):
        
        size = len(nums)
        
        a,val,=0,0
        temp = 0
        maxi = 0
        nums.sort()
        
        if size > 1:
            while a<size-1:
                if nums[a] == nums[a+1]:
                    val+=1

                if val > maxi:
                    maxi = val
                    temp = nums[a]
                    if maxi > size/2:
                        break

                if nums[a] < nums[a+1]:
                    val = 0
                a+=1
                
            return temp
        
        else:
            return nums[0]