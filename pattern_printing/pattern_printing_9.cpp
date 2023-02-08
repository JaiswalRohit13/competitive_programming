// ABCDCBA
// ABC CBA
// AB   BA
// A     A

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1; j<=7; j++)
        {
            if(i+j<=5 || j-i>=3)
            {
                cout<<k;
                (j<4)?k++:k--;
            }
            else
            {
                cout<<" ";
                if(j==4)
                    k--;
            }

        }
        cout<<endl;
    }
    return 0;
}