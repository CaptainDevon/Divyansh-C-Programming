#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
    void show()
    {
        cout<<"This message is from base class"<<endl;
    }
};

class Child: public Base
{
    public:
    void show()
    {
        cout<<"this message is from Child class"<<endl;
    }
};

int main()
{
    Child c;
    c.show();
    Base b;
    b.show();
    return 0;
}