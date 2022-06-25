'''
https://leetcode.com/problems/intersection-of-two-arrays/

  Given two integer arrays nums1 and nums2, return an array of their intersection.
  Each element in the result must be unique and you may return the result in any order.

  Example 1:
    Input: nums1 = [1,2,2,1], nums2 = [2,2]
    Output: [2]

  Example 2:
    Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
    Output: [9,4]
    Explanation: [4,9] is also accepted.
    
'''

class Solution(object):
    def intersection(self, nums1, nums2):

        result = []
        
        i=0
        
        while i < len(nums1):
            
            j=0
            cont = True
            
            for a in result:
                if nums1[i] == a:
                    i+=1
                    cont = False
                    break
                    
            if cont == True:
                while j < len(nums2):

                    if nums1[i] == nums2[j]:        
                        result.append(nums1[i])
                        break

                    j+=1

                i+=1

        return result