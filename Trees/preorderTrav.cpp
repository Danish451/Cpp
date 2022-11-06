#include<iostream>
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
node* buildTree(node* root)
{
    cout << "Enter data" << endl;
    int data;
    cin >> data;

    root = new node(data);
    
    //base case
    if(data==-1)    return NULL;

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
void preorder(node* root)
{
    //base case
    if(root==NULL)  return ;

    cout << root->data << " ";
    preorder(root->left);
    
    preorder(root->right);
}

int main()
{
    node* root = NULL;
    
    //creating tree
    root = buildTree(root);

    //preorder traversal
    cout << "Preorder traversal is : ";
    preorder(root);

}