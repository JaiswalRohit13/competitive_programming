// *******
// *     *
// * *** *
// * * * *
// * *** *
// *     *
// *******


#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if((i==1 || i==7 || j==1 || j==7) ||
            (i>=3 && i<=5 && j>=3 && j<=5 && !(i==4 && j==4)))
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}