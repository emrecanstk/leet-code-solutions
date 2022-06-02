/*
https://leetcode.com/problems/powx-n/

  Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

  Example 1:
    Input: x = 2.00000, n = 10
    Output: 1024.00000

  Example 2:
    Input: x = 2.10000, n = 3
    Output: 9.26100

  Example 3:
    Input: x = 2.00000, n = -2
    Output: 0.25000
    Explanation: 2^-2 = (1/2)^2 = 1/4 = 0.25

*/

double myPow(double x, long n) {
    
		double result = 1.0;
        int long temp = n;
    
		if(n<0) {
            temp = -1*n;
        }
        
		while(temp) {
            
			if(temp % 2 != 0) {
				result = result * x;
				temp = temp - 1;
			}
			else {
				x = x * x;
				temp = temp / 2;
			}
		}
    
		if(n<0)
			result = 1/result;
    
		return result;
	}