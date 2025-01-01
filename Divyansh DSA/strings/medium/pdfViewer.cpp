#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int designerPdfViewer(vector<int>& h, string word)
    {
        int max=h[word[0]-'a'];
        for(int i=0;i<word.length();i++)
        {
            if(h[word[i]-'a']>max) max=h[word[i]-'a'];
        }
        return max*word.length();
    }
};

int main()
{
    vector<int>h(26);
    string word;
    for(int i=0;i<h.size();i++)
    {
        cin>>h[i];
    }
    cin>>word;
    Solution s;
    cout<<s.designerPdfViewer(h,word);
    return 0;
}