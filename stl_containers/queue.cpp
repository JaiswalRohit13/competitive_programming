#include <bits\stdc++.h>

using namespace std;

void displayQueue(queue <int> q)
{
    
    while(q.empty() != 1)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

void explainQueue()
{
    queue <int> qu;
    
    qu.push(1);
    cout<<endl;
    displayQueue(qu);

    qu.push(2);
    cout<<endl;
    displayQueue(qu);

    qu.push(3);
    cout<<endl;
    displayQueue(qu);

    qu.pop();

    qu.push(4);
    cout<<endl;
    displayQueue(qu);

    cout<<endl<<"First element in the queue : "<<qu.front();
    cout<<endl<<"Last element in the queue : "<<qu.back();
}


int main()
{
    explainQueue();
    return 0;
}