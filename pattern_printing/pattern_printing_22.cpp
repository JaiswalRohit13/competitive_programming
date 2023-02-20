//    1
//   12A
//  123AB
// 1234ABC


#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    char k;

    for(i=1; i<=4 ;i++)
    {
        k='1';
        for(j=1; j<=i+3 ; j++)
        {
            if(i+j>=5)
            {
                cout<<k;
                k++;
                if(j==4)
                    k='A';
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}