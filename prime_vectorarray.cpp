//to check for prime in a vector array 
 
#include <bits\stdc++.h>

using namespace std;

int prime(int n)
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
    vector<int> num;
    int inp;

    cout<<"Enter a number\n";
    
    for(int i=0;i<5;i++)
    {
        cin>>inp;
        num.push_back(inp);
    }

    for(auto it = num.begin(); it!= num.end(); it++)
    {
        int flag=prime(*(it));
        if(flag == 1)
            cout<<*(it)<<" : Prime\n";
        else
            cout<<*(it)<<" : Composite\n";
    }   
    
    return 0;
}