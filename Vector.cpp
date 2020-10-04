#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void display(vector<int> &v)
{
     for(int i=0;i<v.size(); i++)
     {
             cout<<v[i]<<" ";
     }
     cout<<"\n";
}
int main()
{
    vector<int> v;
    cout<<"Initial size = "<<v.size()<<"\n";
    int x;
    cout<<"Enter five integer values: ";
    for(int i=0;i<5; i++)
    {
            cin>>x;
            v.push_back(x);
    }
    cout<<"Size after adding 5 values: ";
    cout<<v.size()<<"\n";
    cout<<"Current contents: \n";
    display(v);
    v.push_back(6.6);
    cout<<"\nSize = "<<v.size()<<"\n";
    cout<<"Contents now: \n";
    display(v);
    vector<int> :: iterator itr=v.begin();
    itr = itr + 3;
    v.insert(itr, 9);
    cout<<"\nContents after inserting: \n";
    display(v);
    v.erase(v.begin()+3,v.begin()+5);
    cout<<"\nContents after deletion: \n";
    display(v);
    cout<<"End\n";
    getch();
    return 0;
}
