#include <bits\stdc++.h>

using namespace std;

void displayStack(stack <int> s)
{
    
    while(s.empty() != 1)
    {
        cout<<s.top()<<" ";
        s.pop();
    } 
}

void explainStack()
{
    stack <int> st;
    
    st.push(1);
    cout<<endl;
    displayStack(st);

    st.push(1);
    st.emplace(2);
    cout<<endl;
    displayStack(st);

    st.pop();
    cout<<endl;
    displayStack(st);

    st.push(3);
    cout<<endl;
    displayStack(st);

    cout<<endl<<"Top element : "<<st.top();
}


int main()
{
    explainStack();
    return 0;
}