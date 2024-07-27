#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value, node *next, node *back)
    {
        this->data = value;
        this->prev = back;
        this->next = next;
    }
    node(int value)
    {
        this->data = value;
        this->prev = nullptr;
        this->next = nullptr;
    }
};



class linkedlist
{
    private:
    node* head;
    public:
    node * deleteAllOccurrences(node* head, int k) {

        node* temp=head;

        while(temp)

        {   

            if (temp->data == k) 

            {

            if (temp->prev)

                temp->prev->next = temp->next;

            if (temp->next)

                temp->next->prev = temp->prev;

            if (temp == head)

                head = temp->next;

            }

            temp = temp->next;

        }   

        return head;

    }
    node *array_to_dll(vector<int> nums)
    {
        node *head = new node(nums[0]);
        node *prev = head;
        for (int i = 0; i < nums.size(); i++)
        {
            node *temp = new node(nums[i], nullptr, prev);
            prev->next = temp;
            prev = temp;
        }
        return head;
    }

    void print(node* head)
    {
        while(head)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    linkedlist l;
    node *head = l.array_to_dll(a);
    l.print(head);
}