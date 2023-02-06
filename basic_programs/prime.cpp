#include <bits\stdc++.h>

using namespace std;

int if_Prime(int n)
{
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            c++;
    }
    
    if(c==0)
        return 1;
    else
        return 0;

}
int main()
{
    int l=0,u=0;
    
    cout<<"Enter the lower limit and upper limit of the range\n";
    cin>>l>>u;

    if(l>u)
        return 0;
        
    int c=0, val=0;
    cout<<"\nPrime numbers in the given range :\n";
    for(int i=l;i<=u;i++)
    {
        val = if_Prime(i);
        if( val == 1)
        {
            c++;
            cout<<i<<"  ";
        }
    }
    
    if(c==0)
        cout<<"NONE !";
        
    return 0;
}