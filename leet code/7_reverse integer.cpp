#include <bits\stdc++.h>
using namespace std;

 int reverse(int x)
 {
        int rev=0;
        for(int i=0;x!=0;i++)
        {
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;

            rev = (rev * 10) + (x%10);
            x = x / 10;
        }
        return rev;
    }

int main()
{
    cout <<"Reverse of 100 = "<< reverse(100)<<endl;
    cout <<"Reverse of -6743 = "<< reverse(-6743)<<endl;
    return 0;
}

// 7. Reverse Integer

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1