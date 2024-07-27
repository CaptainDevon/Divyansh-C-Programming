#include <iostream>
using namespace std;
class solution 
{
    public:
    int sum(int n)
    {
        return (n*(n+1))/2;
    }
};
int main()
{
    int number ;
    cout<<"enter the number of terms: ";
    cin>>number;
    solution s;
    cout<<"the sum of "<<number<<" terms is: "<<s.sum(number); 
    return 0;
}