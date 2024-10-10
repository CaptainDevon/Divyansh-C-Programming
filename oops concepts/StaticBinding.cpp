#include <iostream>
using namespace std;

class A
{
    public:
    virtual void show()=0;

};

class B: public A
{
    public:
    void show(){cout<<"B"<<endl;}
};

class C: public A
{
    public:
    void show(){cout<<"C"<<endl;}
};


class D: public B, public C
{
    public:
    void show(){cout<<"D"<<endl;}
};

int main()
{
    B b;
    C c;
    D d;

    b.show();
    return 0;
}