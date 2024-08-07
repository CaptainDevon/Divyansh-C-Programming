#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        string odd="";
        int n=num.length();
        for(int i=n-1;i>=0;i--)
        {
            if((num[i]-'0')%2!=0)
            {
                odd=num.substr(0,i+1);
                break;
            }
        }
        return odd;
    }
};
int main()
{
    string num="357882";
    Solution s;
    string res=s.largestOddNumber(num);
    cout<<res;
}