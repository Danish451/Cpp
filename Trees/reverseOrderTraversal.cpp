#include <iostream>
#include <queue>
#include<stack>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data); // constructor called

    if (data == -1)
        return NULL;

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void reverseOrderTraversal(node* root)
{
    queue<node* > q;
    stack<node* > p;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        p.push(temp);

        if(temp == NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if(temp->left)
            q.push(temp->left);

            if(temp->right)
            q.push(temp->right);

        }
    }
    while(!p.empty())
    {   
        if()
        {
            cout << p;
            p.pop();
            
        }
        else
        {
            cout << endl;
        }
    }
}
