// *
// **
// ***
// ****
// ***
// **
// *

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        (i<=4)?k++:k--;
        for(j=1; j<=k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}