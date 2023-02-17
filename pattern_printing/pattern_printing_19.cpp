//    A
//   ABA
//  ABCBA
// ABCDCBA
    

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    char k;

    for(i=1; i<=4 ;i++)
    {
        k='A';
        for(j=1; j<=3+i ; j++)
        {
            if(i+j>=5)
            {
                cout<<k;
                (j>=4)?k--:k++;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}