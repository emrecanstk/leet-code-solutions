/*
https://leetcode.com/problems/happy-number/
  
  Write an algorithm to determine if a number n is happy.
  A happy number is a number defined by the following process:

  Starting with any positive integer, replace the number by the sum of the squares of its digits.
  Repeat the process until the number equals 1 (where it will stay),
  or it loops endlessly in a cycle which does not include 1.
  Those numbers for which this process ends in 1 are happy.
  Return true if n is a happy number, and false if not.
  
  Example 1:
    Input: n = 19
    Output: true
    Explanation:
    12 + 92 = 82
    82 + 22 = 68
    62 + 82 = 100
    12 + 02 + 02 = 1

*/

bool isHappy(int n){
     
    int sum=0;
    int digit=0;
    int counter=0;
    
    while(true) {
        counter++;
        digit = 0;
        sum = 0;
        int n2 = n;
        while(n2>0) {
            int temp = n2%10;
            sum+=temp*temp;
            n2/=10;
        }
        n = sum;
        if(n==1) {
            return true;
            break;
        }
        if(counter>10) {
            return false;
            break;
        }
    }         
}