#include <bits/stdc++.h>
using namespace std;

/* we can solve it by method 1 virtual inheritance*/
class A
{
    public:
    void show()
    {
        cout<<"A"<<endl;
    }
};

class B: virtual public A{};
class C: virtual public A{};
class D: public B,public C{};

/* virtual functions*/

class A1
{
    public:
    /*void show()
    {
        cout<<"A1"<<endl;         (function)
    } */

    virtual void show()
    {
        cout<<"A"<<endl;          //(virtual function)
    }
    /* virtual void show()=0; (pure virtual funtion)*/
    
};

class B1:public A1
{
    public:
    void show()
    {
        cout<<"B1"<<endl;
    }
};

class C1: public A1
{
    public:
    void show()
    {
        cout<<"C1"<<endl;
    }
};

class D1: public B1,public C1
{
    public:
    void show()
    {
        cout<<"D1"<<endl;
    }
};


int main()
{
    D d;
    d.show();
    D1 d1;
    d1.show();
    return 0;
}