#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string: ";
    cin >> s;
    // precompute
    int hash[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"enter number of queries: ";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"enter the charecter: ";
        //fetching
        cin>>c;
        cout<<"the charecter "<<c<<" has appeared "<<hash[c-'a']<<" times"<<endl;
    }
}