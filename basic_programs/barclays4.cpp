// The Largest Prime Number Possible from a Subsequence of a Binary String

// Introduction
// Prime numbers are numbers that are only divisible by one and themselves. A subsequence of a string is a string obtained from the original string by deleting some characters from it. A string is a binary string containing only '0' and '1' as its characters.

// Problem Statement
// You are given a binary string, and your task is to find the largest prime number that can be obtained from a subsequence of the string. 

// For example:

// Input
// s= “1011”
// Output
// 11
// Explanation:
// The largest subsequence of the string, "1011", is itself a prime number(11) and is the largest prime number that can be made. Thus, 11 is the answer.

#include<bits/stdc++.h>
using namespace std;

/*
    Function that tells if the given number is prime number or not
*/
bool prime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "1011";
    int ans = -1;
    int n = s.length();

    vector<pair<string,int>>v;
    v.push_back({"",0});
    // Traverse through the string
    for(int i=0;i<n;i++){
        // Traverse through all the pairs in the vector v, and add the current character to them.
        int sz = v.size();
        for(int j=0;j<sz;j++){
            //Find the value of the new string and new decimal after adding the current character
            string temp = v[j].first;
            int num = v[j].second;
            string new_string = temp;
            int new_num;
            if(s[i]=='1'){
                new_string+='1';
                new_num = 2*num+1;
            }
            else{
                new_string+='0';
                new_num = 2*num;
            }
            /*
                Push the new string and the new num into v as a pair
            */
            v.push_back({new_string,new_num});
            /*
                If the new number is a prime number, update the answer to the    maximum of the answer and the new number.
            */
            if(prime(new_num)){
                ans = max(ans,new_num);
            }
        }
    }
    /*
        Print the answer
    */
    cout<<ans<<endl;
    return 0;
}