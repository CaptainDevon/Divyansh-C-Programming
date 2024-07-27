#include<bits/stdc++.h>
using namespace std;
class stack
{
    private:
    queue<int> q;
    public:
    stack()
    {

    }
    int get_size()
    {
        return q.size();
    }
    bool isempty()
    {
        if(q.empty())
        {
            return true;
        }
        else return false;
    }
    void push(int element)
    {
        q.push(element);
        for(int i=0;i<q.size()-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int pop()
    {
        if(q.empty())
        {
            return -1;
        }
        else{
            int popped=q.front();
            q.pop();
            return popped;
        }
    }
    int top()
    {
        if(q.empty())
        {
            return -1;
        }
        else
        {
            return q.front();
        }
    }
};