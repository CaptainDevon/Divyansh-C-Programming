#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    string convert_to_binary(int number)
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
};
int main()
{   
    int number;
    cout<<"enter a number: ";
    cin>>number;
    solution s;
    cout<<s.convert_to_binary(number);
    return 0;
}