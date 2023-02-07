//     1
//    121
//   12321
//  1234321

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1; j<=i+4; j++)
        {
            if(j<=5-i)
                cout<<" ";
            else
            {
                cout<<k;
                (j<5)?k++:k--;
            }

        }
        cout<<endl;
    }
    return 0;
}