'''
https://leetcode.com/problems/two-sum/

  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
  You may assume that each input would have exactly one solution, and you may not use the same element twice.
  You can return the answer in any order.

  Example:
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

'''

class Solution(object):
    def twoSum(self, nums, target):
        resultArray = []
        
        a,b=0,1
        
        while a<len(nums):
            while b<a:
                if nums[a] + nums[b] == target and a != b:
                    resultArray.append(a)
                    resultArray.append(b)
                    break
                b+=1
            a+=1
            b=0
                    
        return resultArray