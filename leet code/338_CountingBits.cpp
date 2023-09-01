vector<int> countBits(int n) {
        // n+1 as we are going to count from 0 to n
    vector<int> t(n+1);
    
    // t[0] will be 0 beacuse 0 has count of set bit is 0;
    t[0] = 0;
    
    // we can compute current set bit count using previous count
    // as x/2 in O(1) time
    
    // i%2 will be 0 for even number ans 1 for odd number
    
    for(int i = 1; i<=n; ++i)
        t[i] = t[i/2] + i%2;
    
    return t;
}

// Basic Approach - Time complexity - Big Oh of nlogn 
            
// count = 0;
// while(i!=0)
// {
//     if(i&1)
//         count++;
//     i = i>>1;
// }
// ans.push_back(count); 



// 338. Counting Bits

// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

// Example 1:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// Example 2:

// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
 

// Constraints:

// 0 <= n <= 105
 

// Follow up:

// It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
// Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?