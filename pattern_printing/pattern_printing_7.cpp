// *********
// **** ****
// ***   ***
// **     **
// *       *

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1; j<=9; j++)
        {
            if(i+j<=6 || j-i>=4)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}