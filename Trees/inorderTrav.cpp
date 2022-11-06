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
void inorder(node* root)
{
    //base case
    if(root==NULL)  return ;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node* root = NULL;
    
    //creating tree
    root = buildTree(root);

    //inorder traversal
    cout << "Inorder traversal is : ";
    inorder(root);

}