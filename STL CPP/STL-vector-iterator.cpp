#include <bits/stdc++.h>
using namespace std;

int vector_iterator_insertion()
{   
    //operation of vectors using iterators insertion
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(40);
    v.push_back(0);
    v.push_back(5);
    //iterator works as pointers to the elements in a vector[stores the address value of the elements in the vector]
    vector<int>::iterator it=v.begin(); //the pointer is placed at the first element 
    it++;                   //tells iterator to move from 1 to 10[moves forward(++)]
    cout<<*(it)<<endl;
    it++;                   //tells the iterator to move from 10 to 40[moves forward(++)]
    cout<<*(it)<<endl;
    it++;                   //tells the operator to move from 40 to 0[moves forward(++)]
    cout<<*(it)<<endl;      
    cout<<endl;
    vector<int>::iterator it1=v.end();//the pointer is placed at the end of the vector
    it1--;                   //tells the iterator to move from 5 to 0[moves backwards(--)]
    cout<<*(it1)<<endl;
    it1--;                   //tells the iterator to move from o to 40[moves backwards(--)]
    cout<<*(it1)<<endl;
    it1--;                   //tells the iterator to move from 40 to 10[moves backwards(--)]
    cout<<*(it1)<<endl;
    cout<<endl;

    //v.rend=v.begin;
    //v.rbegin=v.end;
}

int vector_iterator_deletion()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(40);
    v.push_back(0);
    v.push_back(5);

    v.erase(v.begin()); // deletes 1 from vector
    v.erase(v.begin()+3); // deletes 5 from the vector
    int n=sizeof(v)/sizeof(v[1]);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl; //we will gett the vector without 1 and 5
    }
    cout<<endl;
    cout<<v.size();//tells size of the vector

    return 0;
}


int main()
{
    vector_iterator_insertion();
    vector_iterator_deletion();
    return 0;
}