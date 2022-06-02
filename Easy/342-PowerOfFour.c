/*
https://leetcode.com/problems/power-of-four/

  Given an integer n, return true if it is a power of four. Otherwise, return false.
  An integer n is a power of four, if there exists an integer x such that n == 4x.

  Example 1:
    Input: n = 16
    Output: true

  Example 2:
    Input: n = 5
    Output: false

*/

bool isPowerOfFour(int n){
    
    int i,a;
    bool result = false;
    
    if(n>=0 && n<=1024) i=1,a=5;
    if(n>1024 && n<=16384) i=5,a=7;
    if(n>16384 && n<=1048576) i=7,a=10;
    if(n>1048576 && n<=67108864) i=10,a=13;
    if(n>67108864 && n<=1073741824) i=13,a=15;
    if(n>1073741824 && n<2147483647) i=15,a=16;
    
    for(;i<=a;i++) {
        if(n == pow(4,i)) {
            result = true;
            break;
        }
    }
    
    if(n == 1) result = true;
    
    return result;
    
}