#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int countSetBits(int N)
{
    //Write your code here
    int count=0;
    for(int i=1;i<=N;i++)
    {
        int j=i;
        while(j>1)
        {
            if(j%2==1)count++;
            j/=2;
        }
        if(j==1)count++;
        
    }
    return count;
}
};
int main()
{
    int n=4;
    solution s;
    cout<<s.countSetBits(n); 
    return 0;
}