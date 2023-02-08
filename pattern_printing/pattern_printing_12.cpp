// *********
//  *******
//   *****
//    ***
//     *

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,rows,col;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    col=rows*2-1;
    for(i=1; i<=rows ;i++)
    {
        for(j=1; j<=col; j++)
        {
            (j>=i && i+j<=col+1)?cout<<"*":cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}