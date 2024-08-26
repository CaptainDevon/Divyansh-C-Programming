#include <bits/stdc++.h>
using namespace std;
class treenode
{
public:
    int data;
    treenode *l;
    treenode *r;

public:
    treenode(int d)
    {
        data = d;
        l = nullptr;
        r = nullptr;
    }
};

void preorder_traversal(treenode *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder_traversal(root->l);
    preorder_traversal(root->r);
}

void inorder_traversal(treenode *root)
{
    if (root == nullptr)
        return;
    inorder_traversal(root->l);
    cout << root->data << " ";
    inorder_traversal(root->r);
}

void postorder_traversal(treenode *root)
{
    if (root == nullptr)
        return;
    postorder_traversal(root->l);
    postorder_traversal(root->r);
    cout << root->data << " ";
}

int level(treenode *root)
{
    if (root == nullptr)
    {
        return -1; // Height of an empty tree is -1
    }

    int leftHeight = level(root->l);
    int rightHeight = level(root->r);

    return 1 + max(leftHeight, rightHeight);
}

treenode *insertion(treenode *root, int value)
{
    if (root == nullptr)
    {
        return new treenode(value);
    }

    if (value < root->data)
    {
        root->l = insertion(root->l, value);
    }
    else if (value > root->data)
    {
        root->r = insertion(root->r, value);
    }

    return root;
}
treenode *findMin(treenode *node)
{
    while (node->l != nullptr)
    {
        node = node->l;
    }
    return node;
}

treenode *deletion(treenode *root, int value)
{
    if (root == nullptr)
        return root;
    if (value < root->data)
        root->l = deletion(root->l, value);
    else if (value > root->data)
        root->r = deletion(root->r, value);
    else
    {
        if (root->l == nullptr)
        {
            treenode *temp = root->r;
            delete root;
            return temp;
        }
        else if (root->r == nullptr)
        {
            treenode *temp = root->l;
            delete root;
            return temp;
        }
        treenode *temp = findMin(root->r);
        root->data = temp->data;
        root->r = deletion(root->r, temp->data);
    }
    return root;
}

int main()
{
    treenode *root = new treenode(0);
    treenode *root1;
    root->l = new treenode(1);
    root->r = new treenode(2);
    root->l->l = new treenode(3);
    root->l->r = new treenode(4);
    root->r->l = new treenode(5);
    root->r->r = new treenode(6);
    root->l->l->l = new treenode(8);
    root->l->l->r = new treenode(9);
    root->l->r->l = new treenode(10);

    preorder_traversal(root);
    cout << endl;
    inorder_traversal(root);
    cout << endl;
    postorder_traversal(root);
    cout << endl;
    cout << level(root) << endl;
    cout << "----------------------------------------------------------";
    root1 = insertion(root1, 1);
    root1 = insertion(root1, 5);
    root1 = insertion(root1, 2);
    root1 = insertion(root1, 3);
    root1 = insertion(root1, 4);
    root1 = insertion(root1, 6);
    cout << endl;
    postorder_traversal(root1);
    cout << endl;
    cout << "----------------------------------------------------------";
    cout << endl;
    root1 = deletion(root1, 3);
    root1 = deletion(root1, 6);
    postorder_traversal(root1);

    return 0;
}
