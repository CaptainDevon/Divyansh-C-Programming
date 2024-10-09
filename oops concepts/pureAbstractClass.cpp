#include <bits/stdc++.h>
using namespace std;

/* pure abstract class are the class which has only virtual function in it*/
class PureAbstractClass
{
    public:
    virtual void hello()=0;
    virtual void bye()=0;
};

class Child: public PureAbstractClass
{
    public:
    void hello() override
    {
        cout<<"Hello"<<endl;
    }

    void bye() override
    {
        cout<<"Bye"<<endl;
    }
};

int main()
{
    Child c;
    c.hello();
    c.bye();
    return 0;
}