'''
https://leetcode.com/problems/plus-one/

  You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
  The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
  Increment the large integer by one and return the resulting array of digits.

  Example 1:
    Input: digits = [4,3,2,1]
    Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.
    Incrementing by one gives 4321 + 1 = 4322.
    Thus, the result should be [4,3,2,2].
  
  Example 2:
    Input: digits = [8,9,9,9]
    Output: [9,0,0,0]
    Explanation: The array represents the integer 8999.
    Incrementing by one gives 8999 + 1 = 9000.
    Thus, the result should be [9,0,0,0]

'''

class Solution(object):
    def plusOne(self, digits):
        
        size = len(digits)
        
        i = 1 
        a = True
        
        while size-i >= 0 and a == True:

            if digits[size-i] >= 9:
                digits[size-i] = 0
                if size-i != 0:
                    if digits[size-i-1] != 9: a = False
                    digits[size-i-1] += 1
                
                else:
                    digits.insert(0,1)
                    break

            else:
                digits[size-i] += 1
                break

            i += 1
                
        return digits