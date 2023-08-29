#include <bits\stdc++.h>
using namespace std;

int mySqrt(int x) {
    int l=1, m=-1, h=x;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(m == x/m)
            return m;
        else if(m > x/m)
            h=m-1;
        else
            l=m+1;
    }
    return h;
}
int main()
{
    cout<<"Square root of 17 = "<<mySqrt(17)<<endl;
    cout<<"Square root of 123 = "<<mySqrt(123)<<endl;
    return 0;
}

// 69. Sqrt(x)

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

// Constraints:

// 0 <= x <= 231 - 1