//    A1
//   AB12
//  ABC123
// ABCD1234


#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    char k;

    for(i=1; i<=4 ;i++)
    {
        k='A';
        for(j=1; j<=4+i ; j++)
        {
            if(i+j>=5)
            {
                cout<<k;
                k++;
                if(j==4)
                    k='1';
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}