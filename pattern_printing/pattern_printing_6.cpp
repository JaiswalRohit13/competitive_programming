//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1; j<=i+4; j++)
        {
            if(j<=5-i)
                cout<<" ";
            else
            {
                if((i+j)%2==0)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}