#include<iostream>
using namespace std;
class solution
{
    public:
    int setBits(int N){
    // Check if there's any unset bits.
    if((N & (N+1)) == 0)
        return N;
    
    // Set the least significant unset bit of ‘N’ to 1 and return.
    return N | (N+1);
}
};
int main()
{
    int N=13;
    solution s;
    cout<<s.setBits(N);
}