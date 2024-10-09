#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
    virtual void answer()=0;
};

class Child: public Base
{
    public:
    void answer() override
    {
        cout<<"This is the child instance"<<endl;
    }
};

int main()
{
    /* we cannot do this "Shape s"  
    because it has a virtual function which makes the abstract class 
    and it can be only used for extensions for the child class*/

    Child c;
    c.answer();

    /*we can use pointer for the Child class
    still we cannot do Base* pointerB=new Base(); as it is the abstract class*/
    Base* pointer=new Child();
    
    pointer->answer();

    delete pointer;

    return 0;
}