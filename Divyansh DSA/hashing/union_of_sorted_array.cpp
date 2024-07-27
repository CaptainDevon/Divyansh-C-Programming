#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> union_of_array(vector<int> a, vector<int> b)
    {
        vector<int> result;
        set<int> st;
        for(int i=0;i<a.size();i++)
        {
            st.insert(a[i]);
        }
        for(int j=0;j<b.size();j++)
        {
            st.insert(b[j]);
        }
        for(auto it:st)
        {
            result.push_back(it);
        }
        return result;
    }
};
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {2, 3, 5};
    solution s;
    vector<int> result = s.union_of_array(a, b);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}