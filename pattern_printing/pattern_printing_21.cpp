//    *****
//   *****
//  *****
// *****


#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;

    for(i=1; i<=4 ;i++)
    {
        for(j=1; j<=5+(4-i) ; j++)
        {
            if(i+j>=5)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}