#include <bits/stdc++.h>
using namespace std;

class treenode
{
    public:
    int data;
    treenode *right;
    treenode *left;

    treenode(int value)
    {
        this->data = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class tree_implementation
{
private:
    treenode *root;

public:
    void preorder_traversal(treenode *root)
    {
        if (root == nullptr)
            return;
        cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }

    void inorder_traversal(treenode* root)
    {
        if(root==nullptr)return;
        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }

    void postorder_traversal(treenode* root)
    {
        if(root==nullptr)return;
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout<<root->data<<" ";
    }

    int countNodes(treenode* root)
    {
        if(root==nullptr)return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};

int main()
{
    treenode* root=new treenode(0);
    root->left=new treenode(1);
    root->right=new treenode(2);
    root->left->left=new treenode(3);
    root->left->right=new treenode(4);
    root->right->left=new treenode(5);
    root->right->right=new treenode(6);
    tree_implementation t;
    cout<<t.countNodes(root)<<endl;
    t.preorder_traversal(root);
    cout<<endl;
    t.inorder_traversal(root);
    cout<<endl;
    t.postorder_traversal(root);
    return 0;
}
