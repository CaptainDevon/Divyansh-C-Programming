#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    string binary_number(int number)
    {
        string result="";
        while(number!=1)
        {
            if(number%2==1){result+="1";}
            else{result+="0";}
            number=number/2;
        }
        if(number==1){result+="1";}
        else result+="0";
        reverse(result.begin(),result.end());
        return result;
    }
    bool Ith_bit_set(string &str,int k)
    {
        reverse(str.begin(),str.end());
        if(str[k]=='1')
        {
            return true;
        }
        else return false;
    }
};
int main()
{
    int number=13;
    int k=1;
    solution s;
    string str=s.binary_number(number);
    cout<<s.Ith_bit_set(str,k);

    return 0;
}