#include <bits/stdc++.h>
using namespace std;

class Sample
{
    public:
    void display()
    {
        cout<<"hello i am the sample"<<endl;
    }
};

int main()
{

    Sample* s=new Sample();
    s->display();
    return 0;
}