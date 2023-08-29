#include <bits\stdc++.h>
using namespace std;

int findComplement(int num) { 
    int mask = 1;
    while((mask & num)!=num)
    {
        mask = mask << 1;
        mask +=1;
    }
    return mask ^ num;
}

int main ()
{
    cout<<findComplement(5)<<endl;
    cout<<findComplement(143)<<endl;
    return 0;
}