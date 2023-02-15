//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,k,rows;
    cout<<"Enter the number of rows :";
    cin>> rows;

    for(i=1; i<=rows ;i++)
    {
        k=1;
        for(j=1; j<=(rows+1)/2 ; j++)
        {
            if(j>=1 && (i+j<=(rows+1)/2 || i-j>=(rows+1)/2))
            {
                cout<<" ";
            }
            else
            {
                cout<<k;
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}