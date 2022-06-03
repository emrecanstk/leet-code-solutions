/*
https://leetcode.com/problems/roman-to-integer/

  Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

  Symbol       Value
  I             1
  V             5
  X             10
  L             50
  C             100
  D             500
  M             1000

  For example, 2 is written as II in Roman numeral,
  just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII,
  which is XX + V + II.

  Roman numerals are usually written largest to smallest from left to right. However,
  the numeral for four is not IIII. Instead, the number four is written as IV.
  Because the one is before the five we subtract it making four. The same principle applies to the number nine,
  which is written as IX. There are six instances where subtraction is used:
    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.
    Given a roman numeral, convert it to an integer.

  Example 1:
    Input: s = "III"
    Output: 3
    Explanation: III = 3.

  Example 2:
    Input: s = "LVIII"
    Output: 58
    Explanation: L = 50, V= 5, III = 3.

  Example 3:
    Input: s = "MCMXCIV"
    Output: 1994
    Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

*/

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int romanToInt(char * s){
    
    int i=0,sum=0;

    while(s[i] != '\0') {

        if(s[i] == 'I') {
            sum += I;
            goto end;
        } 
        if(s[i] == 'V') {
            sum += V; 
            if(i != 0 && s[i - 1] == 'I') sum -= (I * 2); // Subtract. 
            goto end;
        } 
        if(s[i] == 'X') {
            sum += X;
            if(i != 0 && s[i - 1] == 'I') sum -= (I * 2);
            goto end;
        } 
        if(s[i] == 'L') {
            sum += L;
            if(i != 0 && s[i - 1] == 'X') sum -= (X * 2);
            goto end;
            
        } 
        if(s[i] == 'C') {
            sum += C;
            if(i != 0 && s[i - 1] == 'X') sum -= (X * 2);
            goto end;
        } 
        if(s[i] == 'D') {
            sum += D;
            if(i != 0 && s[i - 1] == 'C') sum -= (C * 2);
            goto end;
        } 
        if(s[i] == 'M') {
            sum += M;
            if(i != 0 && s[i - 1] == 'C') sum -= (C * 2);
            goto end;
        }
       
        end: 
            i++;
    }
    
    return sum;
}