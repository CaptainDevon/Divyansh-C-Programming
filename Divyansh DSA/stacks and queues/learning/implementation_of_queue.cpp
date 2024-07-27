#include<bits/stdc++.h>
using namespace std;
class queue
{
    private:
    int front,rear;
    vector<int>arr;
    public:
    queue()
    {
        front=0;
        rear=0;
        arr.resize(100001);
    }

    void enqueue(int e)
    {
        if(rear<arr.size())
        {
            arr[rear]=e;
            rear++;
        }
    }
    int dequeue()
    {
        if(front==rear)
        {
            return -1;
        }
        else
        {
            int val=arr[front];
            front++;
            return val;
        }
    }
};