class Solution {
public:
    int singleNumber(vector<int>& nums) { //approach 1 - using sorting - constant space
        sort(nums.begin(),nums.end());
        int it;
        for(it =1;it< nums.size();it+=2)
        {
            if(nums[it] != nums[it-1])
            {
                return nums[it-1];
            }
        }
        return nums[nums.size() - 1];
    }
};

//approach 2 - using xor - constant space
// int singleNumber(vector<int>& nums) { 
//     int ans=0;
//     for(auto x:nums)
//     ans^=x;
//     return ans;
// }

// 136. Single Number

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4
// Example 3:

// Input: nums = [1]
// Output: 1
 

// Constraints:

// 1 <= nums.length <= 3 * 104
// -3 * 104 <= nums[i] <= 3 * 104
// Each element in the array appears twice except for one element which appears only once.