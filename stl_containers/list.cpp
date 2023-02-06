#include <bits\stdc++.h>

using namespace std;

void displayList(list <int> l)
{
    for(auto it = l.begin(); it!= l.end(); it++)
    {
        cout<<(*(it))<<" ";
    } 
}

void explainList()
{
    list <int> ls;
    
    ls.push_back(1);
    cout<<endl;
    displayList(ls);

    ls.emplace_back(2);
    cout<<endl;
    displayList(ls);

    ls.push_front(3);
    cout<<endl;
    displayList(ls);

    ls.emplace_front(); //adds 0 at the front of existing list values - 0 3 1 2
    cout<<endl;
    displayList(ls);

}


int main()
{
    explainList();
    return 0;
}