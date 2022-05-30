'''
https://leetcode.com/problems/divide-two-integers/

  The integer division should truncate toward zero, which means losing its fractional part. 
  For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.
  Return the quotient after dividing dividend by divisor.

  Note: Assume we are dealing with an environment that could only store integers within the
  32-bit signed integer range: [−2^31, 2^31 − 1]. For this problem, if the quotient is strictly
  greater than 2^31 - 1, then return 231 - 1, and if the quotient is strictly less than -2^31, 
  then return -2^31.

  Example 1:
    Input: dividend = 7, divisor = -3
    Output: -2
    Explanation: 7/-3 = -2.33333.. which is truncated to -2.

'''

class Solution(object):
    def divide(self, dividend, divisor):

        result = float(dividend) / float(divisor)  
        
        if result < -2147483648:
            return -2147483648
        elif result > 2147483647:
            return 2147483647
        else:
            return int(result)
