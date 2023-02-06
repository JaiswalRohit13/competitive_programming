// *****
//  ****
//   ***
//    **
//     *

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            (j<i)?cout<<" ":cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}