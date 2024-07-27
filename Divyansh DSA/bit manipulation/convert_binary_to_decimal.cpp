#include<bits/stdc++.h>
#include<string>
using namespace std;
class solution
{
    public:
    int convert_to_decimal(string &str)
    {
        reverse(str.begin(),str.end());
        int result=0;
        int p=1;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='1')
            {
                result+=p;
            }
            p*=2;
        }
        return result;
    }
};
int main()
{
    string s="1101";
    solution sl;
    cout<<sl.convert_to_decimal(s);
    return 0;
}