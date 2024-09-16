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

bool solve(treenode *r1, treenode *r2)
{
    if (r1 == NULL && r2 == NULL)
        return true;

    if (r1 == NULL || r2 == NULL)
        return false;

    bool lefti = solve(r1->l, r2->l);
    bool righti = solve(r1->r, r2->r);

    if ((r1->data == r2->data) && lefti && righti)
        return true;
    else
    {
        return false;
    }
}

bool isIdentical(treenode *r1, treenode *r2)
{
    return solve(r1, r2);
}

treenode *buildTree(string str)
{
    if (str.length() == 0 || str[0] == 'N')
        return nullptr;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    treenode *root = new treenode(stoi(ip[0]));

    queue<treenode *> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size())
    {
        treenode *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if (currVal != "N")
        {
            currNode->l = new treenode(stoi(currVal));

            queue.push(currNode->l);
        }

        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        if (currVal != "N")
        {
            currNode->r = new treenode(stoi(currVal));
            queue.push(currNode->r);
        }
        i++;
    }

    return root;
}
treenode *buildTree(treenode *root)
{
    cout << "Enter the data for node: ";
    int data;
    cin >> data;
    root = new treenode(data);

    if (data == -1)
        return nullptr;

    cout << "Enter data for left of " << root->data << " :";
    root->l = buildTree(root->l);
    cout << "Enter data for right of " << root->data << " :";
    root->r = buildTree(root->r);

    return root;
}

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
    cout << "----------------------------------------------------------" << endl;

    string str = "1 2 3 4 N N 5 N N 6 7";
    treenode *newRoot = nullptr;
    newRoot = buildTree(newRoot);

    treenode *freshNode = buildTree(str);

    preorder_traversal(newRoot);
    cout << endl;
    cout << "----------------------------------------------------------" << endl;
    preorder_traversal(freshNode);
    cout << endl;
    return 0;
}
