'''
https://leetcode.com/problems/palindrome-number/

  Given an integer x, return true if x is palindrome integer.
  An integer is a palindrome when it reads the same backward as forward.

  Example 1:
    Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.

'''

class Solution(object):
    def isPalindrome(self, x):
        
        isTrue = True
        strX = str(x)
        
        a,size=0,len(strX)
        
        while a<size/2:
            if strX[a] != strX[size-a-1]:
                isTrue = False
                break
            a+=1
        
        return isTrue
        