#include<iostream>
#include<queue>
using namespace std;
class node
{
    public :
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
int height(node* root)
  {
     //base case
    if(root == NULL)    return 0;

    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;

    return ans;
}
  
   int diameter(node* root) {
        if(root == NULL)    return 0;
        
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + height(root->right) + 1;
        
        int ans = max(op1, max(op2, op3));
        return ans;
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
    buildFromlevelOrder(root);

    cout << "DIAMETER OF TREE = " << diameter(root);
}