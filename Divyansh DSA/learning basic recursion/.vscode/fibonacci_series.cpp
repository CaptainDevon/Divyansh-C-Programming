#include <iostream>
using namespace std;
class solution
{
public:
    int fib(int n)
    {
        int fb[35];
        fb[0]=0;
        fb[1]=1;
        for(int i=2;i<35;i++)
        {
            fb[i]=fb[i-1]+fb[i-2];
        }
        return fb[n];
    }
};
int main()
{
    int term;
    cout<<"enter the term number: ";
    cin>>term;
    solution s;
    cout<<s.fib(term);
    return 0;
}