#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "this message is from the base class" << endl;
    }
};

class Child : public Base
{
public:
    void show() override
    {
        cout << "this message is from the child class" << endl;
    }
};

int main()
{
    Base b;
    Child c;
    b.show();
    c.show();
    c.Base::show();
    return 0;
}