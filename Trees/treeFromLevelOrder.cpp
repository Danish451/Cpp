#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;

        node(int d)
        {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};
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
void buildFromlevelOrder(node* &root)
{
    queue<node* >q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for : " << temp->data << endl;
        int left;
        cin >> left;

        if(left != -1)  
        {
            temp->left = new node(left);
            q.push(temp->left);
        }

        cout << "Enter right node for : " << temp->data << endl;
        int right;
        cin >> right;

        if(right != -1)
        {
            temp->right = new node(right);
            q.push(temp->right);
        } 
    }
    
}
int main()
{
    node* root = NULL;

    //creating a tree
    buildFromlevelOrder(root);

    //confirm
    levelOrderTraversal(root);
    

    return 0;
}