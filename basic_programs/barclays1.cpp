// Question 1 : Elements of Matrix

// Problem Statement 
// You are required to input the size of the matrix then the elements of matrix, then you have to divide the main matrix in two sub matrices (even and odd) in such a way that element at 0 index will be considered as even and element at 1st index will be considered as odd and so on. then you have sort the even and odd matrices in ascending order then print the sum of second largest number from both the matrices

// Example:

// enter the size of array : 5
// enter element at 0 index : 3
// enter element at 1 index : 4
// enter element at 2 index : 1
// enter element at 3 index : 7
// enter element at 4 index : 9
// Sorted even array : 1 3 9
// Sorted odd array : 4 7
// 7


#include <bits\stdc++.h>
using namespace std;

int main()
{
    int odd[50];
    int even[50];
    int len, len_odd =0, len_even =0;

    cout<<"enter the size of array: ";
    cin>>len;

    //input array
    for(int i=0;i<len;i++)
    {
        if(i&1) //odd
        {
            cin>>odd[i/2];
            len_odd++;
        }
        else
        {
            cin>>even[i/2];
            len_even++;
        }
    }

    sort(odd,odd + len_odd );
    sort(even,even + len_even );

    //return the output
    cout<<"answer = " << odd[len_odd -2] + even[len_even -2];
}