#include <iostream>
using namespace std;
int main()
{
    int number1,number2,number3;
    cout<<"enter the first number:";
    cin>>number1;
    cout<<"enter the second number:";
    cin>>number2;
    cout<<"enter the third number:";
    cin>>number3;
    if(number1>number2 && number1>number3)
    {
        cout<<number1<<" is the greatest number"<<endl;
    }
    else if(number1>number2 && number1>number3)
    {
        cout<<number2<<" is the greatest number"<<endl;
    }
    else 
    {
        cout<<number3<<" is the greatest number"<<endl;
    }
    return 0;
}
