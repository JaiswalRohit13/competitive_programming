//    1
//   232
//  34543
// 4567654

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0;
    for(i=1; i<=4 ;i++)
    {
        k=i;
        for(j=1; j<=i+3 ; j++)
        {
            if(j<=4-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<k;
                (j<4)?k++:k--;
            }
        }
        cout<<endl;
    }
    return 0;
}