//    1
//   232
//  34543
// 4567654

#include <bits\stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0,rows;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    for(i=1; i<=rows ;i++)
    {
        k=i;
        for(j=1; j<=rows+i; j++)
        {
            (j>=rows-i)?cout<<k:cout<<" ";
            (j<=rows)?k++:k--;
        }
        cout<<endl;
    }
    return 0;
}