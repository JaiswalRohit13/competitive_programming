// *********
//  *******
//   *****
//    ***
//     *
    

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;

    for(i=1; i<=5 ;i++)
    {
        for(j=1; j<=10-i ; j++)
        {
            if(j>=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}