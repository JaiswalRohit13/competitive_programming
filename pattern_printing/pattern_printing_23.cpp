// 1
// 10
// 101
// 1010
// 10101
// 101010


#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,k,rows;
    cout<<"Enter the number of rows";
    cin>>rows;

    for(i=1; i<=rows ;i++)
    {
        k=1;
        for(j=1; j<=i; j++)
        {
            cout<<k;
            (j%2==0)?k=1:k=0;
        }
        cout<<endl;
    }
    return 0;
}