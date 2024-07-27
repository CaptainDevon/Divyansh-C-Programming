#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> bitManipulation(int num, int i)
    {

        int shiftAtPos = 1 << (i - 1);

        int x = (num & shiftAtPos) ? 1 : 0;

        int y = num | shiftAtPos;

        int z = num & ~shiftAtPos;

        return {x, y, z};
    }
};
int main()
{
    int n = 25;
    int i = 3;
    solution s;
    vector<int>r=s.bitManipulation(n,i);
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }
    return 0;
}