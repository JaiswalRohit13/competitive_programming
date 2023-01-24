#include <bits\stdc++.h>

using namespace std;

int armstrong(int n)
{
    int sum=0;
    int dgt;
    int m=n;

    while(n!=0)
    {
        dgt = n%10;
        sum = sum + (dgt*dgt*dgt);
        n = n/10;
    }

    if(sum == m)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    
    if(armstrong(num) == 1)
        cout<<"\nArmstrong number";
    else
        cout<<"\nNot an Armstrong number";
    return 0;
}