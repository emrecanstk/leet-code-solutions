'''
https://leetcode.com/problems/sqrtx/

  Given a non-negative integer x, compute and return the square root of x.
  Since the return type is an integer, the decimal digits are truncated, 
  and only the integer part of the result is returned.

  Example 1:
    Input: x = 4
    Output: 2

  Example 2:
    Input: x = 8
    Output: 2
    Explanation: The square root of 8 is 2.82842...,
    and since the decimal part is truncated, 2 is returned.

  emrecanstk's note:
    Most users solved it with Newton's method. 
    Newton's solution is the most optimized solution. 
    I wrote this to add a different solution method.

'''

class Solution(object):
    def mySqrt(self, x):

        result = 0
        
        for i in range(0,46341):
            sqr = i*i
            sqr2 = (i+1) * (i+1)
            
            if x >= sqr and x < sqr2:
                result = i
                print(i)
                break
        
        return result