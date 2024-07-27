#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool balanced_paranthesis(string s)
    {
      stack<int>stk;

    for(int i =0 ;i<s.length();i++)

    {

        if(s[i]=='('||s[i]=='{'||s[i]=='[')

        {

            stk.push(s[i]);

        }

        else

        {

            if(stk.empty())return false;

            else if((s[i]==')'&&stk.top()!='(')||(s[i]==']'&&stk.top()!='[')||(s[i]=='}'&&stk.top()!='{'))

            {

                return false;

            }

            else

            {

                stk.pop();

            }

        }

    }

    if(stk.empty())return true;

    return false;  
    }
};
int main()
{
    string str="(){[()]}";
    solution s;
    cout<<s.balanced_paranthesis(str);
    return 0;
}