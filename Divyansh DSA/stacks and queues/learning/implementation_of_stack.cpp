#include<bits/stdc++.h>
using namespace std;
class stack
{
    public:
    int top;
    int* arr;
    int capacity;
    stack(int space)                  //constructor for stack container
    {
        this->capacity=space;
        arr=new int[capacity];
        top=-1;
    }
    void push(int n)
    {
        if(top==capacity-1)
        {
            return;
        }
        else
        {
            top++;
            arr[top]=n;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            return -1;
        }
        else 
        {
            int val=arr[top];
            top--;
            return val;
        }
    }
    
    int top()
    {
        if(top==-1)return -1;
        return arr[top];
    }
    bool is_empty()
    {
        if(top==-1)
        {
            return true;
        }
        else return false;
    }
};
