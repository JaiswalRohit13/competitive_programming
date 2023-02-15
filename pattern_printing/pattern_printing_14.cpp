// 6543210
// 543210
// 43210
// 3210
// 210
// 10
// 0

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,rows;
    cout<<"Enter the number of rows :";
    cin>> rows;
    for(i=rows-1; i>=0 ; i--)
    {
        for(j=i; j>=0 ; j--)
        {
           cout<<j;
        }
        cout<<endl;
    }
    return 0;
}