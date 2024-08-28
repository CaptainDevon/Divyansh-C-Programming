#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ans;

    while (t--)
    {
        string s;
        cin >> s;
        string str = "";
        int i = 0;

        while (i < s.length())
        {

            if (i + 1 < s.length() && s[i] == s[i + 1])
            {
                str += s[i];
                i += 2;
            }
            else
            {
                str += s[i];
                i++;
            }
        }

        ans.push_back(str);
    }

    for (const string &result : ans)
    {
        cout << result << endl;
    }

    return 0;
}
