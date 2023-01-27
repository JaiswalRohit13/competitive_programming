#include <bits\stdc++.h>

using namespace std;

void displayDeQueue(deque <int> dq)
{
    for(auto it = dq.begin(); it!= dq.end(); it++)
    {
        cout<<(*(it))<<" ";
    } 
}

void explainDeque()
{
    deque <int> dq;
    
    dq.push_back(1);
    cout<<endl;
    displayDeQueue(dq);

    dq.push_back(2);
    cout<<endl;
    displayDeQueue(dq);

    dq.push_back(3);
    cout<<endl;
    displayDeQueue(dq);

    dq.push_back(4);
    cout<<endl;
    displayDeQueue(dq);

    cout<<endl<<"Front Element : "<<dq.front();
    cout<<endl<<"Back Element : "<<dq.back();
}


int main()
{
    explainDeque();
    return 0;
}