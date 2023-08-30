#include <bits\stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    // Approach 1 - 

    // a number in the power of two will always have only one 1 in its binary form.

    // when bitwise and is performed between n and n-1 leaves us with zero 1 bits.

    return (n>0 && ((n& n-1 )==0));

    // Approach 2 - Brute Force Method

    // bool isPowerOfTwo(int n) {
    //     for(int i=0;i<=30;i++)
    //     {
    //         if(pow(2,i) == n)
    //             return true;
    //     }
    //     return false;
    // }

    // Approach 3 - Using last value of ans OR Recursion method

    // int ans = 1;
    // for(int i=0;i<=30;i++)
    // {
    //     if(ans == n)
    //         return true;
    
    //     if(ans < INT_MAX/2)
    //         ans = ans*2;
    // }
    // return false;
}
int main()
{
    cout<<"16 is power of two or not : "<<isPowerOfTwo(16)<<endl;
    cout<<"1 is power of two or not : "<<isPowerOfTwo(1)<<endl;
    cout<<"42 is power of two or not : "<<isPowerOfTwo(42)<<endl;
    return 0;
}