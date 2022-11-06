#include <iostream>
#include <queue>
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

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separator

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL) // previous level completed
        {
            cout << endl;

            if (!q.empty()) // queue still have elements
            {
                q.push(NULL); // separator
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left) // left element != NULL
            {
                q.push(temp->left);
            }

            if (temp->right) // right element != NULL
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;

    // creating a tree
    root = buildTree(root);

    // level order
    cout << "Printing the level order traversal" << endl;
    levelOrderTraversal(root);
    return 0;
}