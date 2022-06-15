/*
https://leetcode.com/problems/reverse-string/

  Write a function that reverses a string. The input string is given as an array of characters s.
  You must do this by modifying the input array in-place with O(1) extra memory.

  Example 1:
    Input: s = ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]

  Example 2:
    Input: s = ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]

*/

void reverseString(char* s, int sSize){
    
    int i;
    
    for(i=0;i<sSize/2;i++) {
        char temp = s[i];
        s[i] = s[sSize-i-1];
        s[sSize-i-1] = temp;
    }
    
}