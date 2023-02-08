//     *
//    ***
//   *****
//  *******
//   *****
//    ***
//     *

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1; j<=7; j++)
        {
            if(i<=4)
            {
                if(i+j>=5 && j-i<4)
                    cout<<"*";
                else
                    cout<<" ";
            }
            else
            {
                if(i-j<=3 && i+j<=11)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}