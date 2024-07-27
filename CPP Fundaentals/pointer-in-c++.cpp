#include <iostream>

using namespace std;

int main()
{
    int *pointer;
    int number;
    cout<<"enter the number:";
    cin>>number;
    pointer=&number;
    cout<<"the address of this number "<<number<<" is:"<<pointer<<endl;
    cout<<"the value of this pointer is:"<<*pointer<<endl;

    return 0;
}