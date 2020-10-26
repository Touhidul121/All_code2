#include<bits/stdc++.h>
using namespace std;

int main()
{
    //declaration---------
    list<int> l;

    //create_list---------
    cout<<"Enter the size"<<endl;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        l.push_back(a);
    }

    //---------Inserting to the front--------
    l.push_front(33);
    for(auto x:l)
        cout<<x<<" ";
        cout<<endl;

    //----------Inserting to the back-------
    l.push_back(11);
for(auto x:l)
        cout<<x<<" ";
        cout<<endl;

    //--------deleting from the back---------
    l.pop_back();
for(auto x:l)
        cout<<x<<" ";
        cout<<endl;

    //----------Deleting from the front--------
    l.pop_front();
    for(auto x:l)
        cout<<x<<" ";
        cout<<endl;

    //-----sorting the list in ascending order----
    l.sort();
    for(auto x:l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //------sorting in descending order-----
    l.reverse();

    for(auto x:l)
        cout<<x<<" ";
        cout<<endl;

        //--------deleting a particular item------
        l.remove(3);
        for(auto x:l)
        cout<<x<<" ";
        cout<<endl;

        //------Inserting in a particular position---
        //say third position
        list<int>::iterator it=l.begin();
        advance(it,2);

        l.insert(it,5);

        for(auto x:l)
            cout<<x<<" ";
}
